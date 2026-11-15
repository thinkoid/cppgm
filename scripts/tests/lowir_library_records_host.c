/* Host of the object that scripts/tests/lowir_library_records.c makes. The
 * C compiler passes these types; the library's functions must agree. */
#include <stdarg.h>
#include <string.h>

struct di
{
	double d;
	long n;
};
struct fff
{
	float a, b, c;
};
struct if_
{
	int i;
	float f;
};
struct __attribute__((packed)) packed
{
	char c;
	int i;
};
struct big
{
	long a, b, c;
};
union union_
{
	double d;
	long n;
};
struct nested
{
	struct
	{
		float a, b;
	} f;
	double d;
};
struct ld
{
	long double x;
};
struct array
{
	int a[3];
};

#define RECORD(name, type, change, same) \
	type ext_id_##name(type x); \
	type ext_call_##name(type x); \
	type host_##name(type x) \
	{ \
		change; \
		return x; \
	} \
	static int check_##name(type x) \
	{ \
		type a = ext_id_##name(x), b = ext_call_##name(x), y = host_##name(x); \
		return same(a, x) && same(b, y); \
	}

#define SAME_DI(p, q) ((p).d == (q).d && (p).n == (q).n)
#define SAME_FFF(p, q) ((p).a == (q).a && (p).b == (q).b && (p).c == (q).c)
#define SAME_IF(p, q) ((p).i == (q).i && (p).f == (q).f)
#define SAME_PACKED(p, q) ((p).c == (q).c && (p).i == (q).i)
#define SAME_BIG(p, q) ((p).a == (q).a && (p).b == (q).b && (p).c == (q).c)
#define SAME_UNION(p, q) ((p).n == (q).n)
#define SAME_NESTED(p, q) ((p).f.a == (q).f.a && (p).f.b == (q).f.b && (p).d == (q).d)
#define SAME_LD(p, q) ((p).x == (q).x)
#define SAME_ARRAY(p, q) ((p).a[0] == (q).a[0] && (p).a[1] == (q).a[1] && (p).a[2] == (q).a[2])

RECORD(di, struct di, (x.d += 1, x.n += 2), SAME_DI)
RECORD(fff, struct fff, (x.a += 1, x.c += 3), SAME_FFF)
RECORD(if, struct if_, (x.i += 1, x.f += 2), SAME_IF)
RECORD(packed, struct packed, (x.c += 1, x.i += 2), SAME_PACKED)
RECORD(big, struct big, (x.a += 1, x.c += 3), SAME_BIG)
RECORD(union, union union_, x.n += 1, SAME_UNION)
RECORD(nested, struct nested, (x.f.b += 1, x.d += 2), SAME_NESTED)
RECORD(ld, struct ld, x.x += 1, SAME_LD)
RECORD(array, struct array, (x.a[0] += 1, x.a[2] += 3), SAME_ARRAY)

double ext_vsum(struct di a, struct fff b, struct packed c, struct ld d, struct big e);
double ext_va(int count, ...);
extern struct di ext_pair;

double host_vsum(int count, ...)
{
	va_list arguments;
	va_start(arguments, count);
	struct di a = va_arg(arguments, struct di);
	struct fff b = va_arg(arguments, struct fff);
	struct packed c = va_arg(arguments, struct packed);
	struct ld d = va_arg(arguments, struct ld);
	struct big e = va_arg(arguments, struct big);
	va_end(arguments);
	return count + a.d + a.n + b.a + b.c + c.c + c.i + (double)d.x + e.a + e.c;
}

int main(void)
{
	struct di di = { 1.5, 2 };
	struct fff fff = { 1, 2, 3 };
	struct if_ if_ = { 4, 5.5f };
	struct packed packed = { 6, 70000 };
	struct big big = { 7, 8, 9 };
	union union_ union_;
	union_.n = 10;
	struct nested nested = { { 11, 12 }, 13 };
	struct ld ld = { 14.25L };
	struct array array = { { 15, 16, 17 } };
	if (!check_di(di) || !check_fff(fff) || !check_if(if_) || !check_packed(packed) || !check_big(big) ||
		!check_union(union_) || !check_nested(nested) || !check_ld(ld) || !check_array(array))
		return 1;
	if (ext_vsum(di, fff, packed, ld, big) != host_vsum(5, di, fff, packed, ld, big))
		return 2;
	/* count + di.d + di.n + fff.a + fff.c + big.c */
	if (ext_va(3, di, fff, big) != 3 + 1.5 + 2 + 1 + 3 + 9)
		return 3;
	if (ext_pair.d != 2.5 || ext_pair.n != 7)
		return 4;
	return 0;
}
