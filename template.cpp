#include <vector>
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx2")
#include <bits/stdc++.h>

#define INLINE static inline

using namespace std;

using i8 = int8_t;
using i16 = int16_t;
using i32 = int32_t;
using i64 = int64_t;
using i128 = __int128;

using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;
using u128 = unsigned __int128;

using uchar = unsigned char;
using schar = signed char;
using ushort = unsigned short;
using uint = unsigned int;
using ulong = unsigned long;

using ll = long long;
using ull = unsigned long long;

using f32 = float;
using f64 = double;
using dbl = double;
using f80 = long double;
using ld = long double;

using pll = pair<ll, ll>;
using pld = pair<ld, ld>;
using vll = vector<ll>;
using vld = vector<ld>;
using vvll = vector<vll>;
using vvld = vector<vld>;
using vpll = vector<pll>;
using vpld = vector<pld>;
using vvpll = vector<vpll>;
using vvpld = vector<vpld>;
using vs = vector<string>;
using vvs = vector<vs>;

template <typename T> using maxpq = priority_queue<T, vector<T>, less<T>>;
template <typename T> using minpq = priority_queue<T, vector<T>, greater<T>>;
using maxpqll = maxpq<ll>;
using maxpqld = maxpq<ld>;
using minpqll = minpq<ll>;
using minpqld = minpq<ld>;

#define VDEC(ty, vsz) using ty ## x ## vsz = ty __attribute__((vector_size(vsz * sizeof(ty))));

VDEC(i8, 16) VDEC(i16, 8) VDEC(i32, 4) VDEC(i64, 2);
VDEC(u8, 16) VDEC(u16, 8) VDEC(u32, 4) VDEC(u64, 2);
VDEC(f32, 4) VDEC(f64, 2);

VDEC(i8, 32) VDEC(i16, 16) VDEC(i32, 8) VDEC(i64, 4) VDEC(i128, 2);
VDEC(u8, 32) VDEC(u16, 16) VDEC(u32, 8) VDEC(u64, 4) VDEC(u128, 2);
VDEC(f32, 8) VDEC(f64, 4);

#define APPL1(m, a1) m(a1)
#define APPL2(m, a1, a2) m(a1) m(a2)
#define APPL3(m, a1, a2, a3) m(a1) m(a2) m(a3)
#define APPL4(m, a1, a2, a3, a4) m(a1) m(a2) m(a3) m(a4)
#define APPL5(m, a1, a2, a3, a4, a5) m(a1) m(a2) m(a3) m(a4) m(a5)
#define APPL6(m, a1, a2, a3, a4, a5, a6) m(a1) m(a2) m(a3) m(a4) m(a5) m(a6)
#define APPL7(m, a1, a2, a3, a4, a5, a6, a7) m(a1) m(a2) m(a3) m(a4) m(a5) m(a6) m(a7)
#define APPL8(m, a1, a2, a3, a4, a5, a6, a7, a8) m(a1) m(a2) m(a3) m(a4) m(a5) m(a6) m(a7) m(a8)
#define APPL9(m, a1, a2, a3, a4, a5, a6, a7, a8, a9) m(a1) m(a2) m(a3) m(a4) m(a5) m(a6) m(a7) m(a8) m(a9)
#define APPL10(m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10) m(a1) m(a2) m(a3) m(a4) m(a5) m(a6) m(a7) m(a8) m(a9) m(a10)
#define APPL11(m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11) m(a1) m(a2) m(a3) m(a4) m(a5) m(a6) m(a7) m(a8) m(a9) m(a10) m(a11)
#define APPL12(m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12) m(a1) m(a2) m(a3) m(a4) m(a5) m(a6) m(a7) m(a8) m(a9) m(a10) m(a11) m(a12)
#define APPL13(m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13) m(a1) m(a2) m(a3) m(a4) m(a5) m(a6) m(a7) m(a8) m(a9) m(a10) m(a11) m(a12) m(a13)
#define APPL14(m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14) m(a1) m(a2) m(a3) m(a4) m(a5) m(a6) m(a7) m(a8) m(a9) m(a10) m(a11) m(a12) m(a13) m(a14)
#define APPL15(m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15) m(a1) m(a2) m(a3) m(a4) m(a5) m(a6) m(a7) m(a8) m(a9) m(a10) m(a11) m(a12) m(a13) m(a14) m(a15)
#define APPL16(m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16) m(a1) m(a2) m(a3) m(a4) m(a5) m(a6) m(a7) m(a8) m(a9) m(a10) m(a11) m(a12) m(a13) m(a14) m(a15) m(a16)
#define APPL17(m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17) m(a1) m(a2) m(a3) m(a4) m(a5) m(a6) m(a7) m(a8) m(a9) m(a10) m(a11) m(a12) m(a13) m(a14) m(a15) m(a16) m(a17)
#define APPL18(m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18) m(a1) m(a2) m(a3) m(a4) m(a5) m(a6) m(a7) m(a8) m(a9) m(a10) m(a11) m(a12) m(a13) m(a14) m(a15) m(a16) m(a17) m(a18)
#define APPL19(m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19) m(a1) m(a2) m(a3) m(a4) m(a5) m(a6) m(a7) m(a8) m(a9) m(a10) m(a11) m(a12) m(a13) m(a14) m(a15) m(a16) m(a17) m(a18) m(a19)
#define APPL20(m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20) m(a1) m(a2) m(a3) m(a4) m(a5) m(a6) m(a7) m(a8) m(a9) m(a10) m(a11) m(a12) m(a13) m(a14) m(a15) m(a16) m(a17) m(a18) m(a19) m(a20)
#define APPL21(m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21) m(a1) m(a2) m(a3) m(a4) m(a5) m(a6) m(a7) m(a8) m(a9) m(a10) m(a11) m(a12) m(a13) m(a14) m(a15) m(a16) m(a17) m(a18) m(a19) m(a20) m(a21)
#define APPL22(m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22) m(a1) m(a2) m(a3) m(a4) m(a5) m(a6) m(a7) m(a8) m(a9) m(a10) m(a11) m(a12) m(a13) m(a14) m(a15) m(a16) m(a17) m(a18) m(a19) m(a20) m(a21) m(a22)
#define APPL23(m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23) m(a1) m(a2) m(a3) m(a4) m(a5) m(a6) m(a7) m(a8) m(a9) m(a10) m(a11) m(a12) m(a13) m(a14) m(a15) m(a16) m(a17) m(a18) m(a19) m(a20) m(a21) m(a22) m(a23)
#define APPL24(m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24) m(a1) m(a2) m(a3) m(a4) m(a5) m(a6) m(a7) m(a8) m(a9) m(a10) m(a11) m(a12) m(a13) m(a14) m(a15) m(a16) m(a17) m(a18) m(a19) m(a20) m(a21) m(a22) m(a23) m(a24)
#define APPL25(m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25) m(a1) m(a2) m(a3) m(a4) m(a5) m(a6) m(a7) m(a8) m(a9) m(a10) m(a11) m(a12) m(a13) m(a14) m(a15) m(a16) m(a17) m(a18) m(a19) m(a20) m(a21) m(a22) m(a23) m(a24) m(a25)
#define GET25(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, ...) a26
#define APPLY(m, a...) GET25(a, APPL25, APPL24, APPL23, APPL22, APPL21, APPL20, APPL19, APPL18, APPL17, APPL16, APPL15, APPL14, APPL13, APPL12, APPL11, APPL10, APPL9, APPL8, APPL7, APPL6, APPL5, APPL4, APPL3, APPL2, APPL1, APPL0)(m, a)

#ifndef ONLINE_JUDGE
//#define ONLINE_JUDGE
#endif

#ifndef ONLINE_JUDGE
INLINE void __print(bool x) {cerr << (x ? "true" : "false");}
INLINE void __print(int x) {cerr << x;}
INLINE void __print(long x) {cerr << x;}
INLINE void __print(long long x) {cerr << x;}
INLINE void __print(unsigned x) {cerr << x;}
INLINE void __print(unsigned long x) {cerr << x;}
INLINE void __print(unsigned long long x) {cerr << x;}
INLINE void __print(i128 x) {cerr << format("{}", x);}
INLINE void __print(u128 x) {cerr << format("{}", x);}
INLINE void __print(float x) {cerr << x;}
INLINE void __print(double x) {cerr << x;}
INLINE void __print(long double x) {cerr << x;}
INLINE void __print(char x) {cerr << '\'' << x << '\'';}
INLINE void __print(const char *x) {cerr << '"' << x << '"';}
INLINE void __print(const string &x) {cerr << '"' << x << '"';}
template<typename T, int N> INLINE void __printv(const T x __attribute__((vector_size(N)))) {
    cerr << "{";
    __print(x[0]);
    for (int i = 1; i < int(N / sizeof(T)); i++) {
        cerr << ", ";
        __print(x[i]);
    }
    cerr << "}";
}
#define VPRNT(ty) INLINE void __print(const ty x) { __printv<typeof(x[0]), sizeof(ty)>(x); }
APPLY(VPRNT,
        i8x16, i16x8, i32x4, i64x2,
        u8x16, u16x8, u32x4, u64x2,
        f32x4, f64x2,
        i8x32, i16x16, i32x8, i64x4, i128x2,
        u8x32, u16x16, u32x8, u64x4, u128x2,
        f32x8, f64x4
);
template<typename T, typename V> INLINE void __print(const pair<T, V> &x);
template<typename T> INLINE void __print(const T &x);
template<typename T, typename V> INLINE void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T> INLINE void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
INLINE void _print() {cerr << "]\n";}
template <typename T, typename... V> INLINE void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#define D(x...) cerr << "[" << #x << "] = ["; _print(x);
#else
#define D(x...)
#endif

#define lf "\n"
#define sp " "

#define Gr(x) ll x; cin >> x;
#define G(x...) APPLY(Gr, x)
#define GDr(x) ld x; cin >> x;
#define GD(x...) APPLY(GDr, x)
#define GSr(s) string s; cin >> s;
#define GS(s...) APPLY(GSr, s)
#define GA(n, c) F(i, n) cin >> c[i];
#define GC(n, c, add) F(i, n) { G(x) c.add(x); }
#define GL(n, c) G(n) GA(n, c)
#define GLC(n, c, add) G(n) GC(n, c, add)
#define EX(x) { cout << x << '\n'; exit(0); }
#define A(a) (a).begin(), (a).end()
#define MULT G(T) while(T--)
#define YN(c) cout << ((c) ? "YES\n" : "NO\n");
#define K first
#define V second

#define GET3(a, b, c, d, ...) d
#define F3(x, start, stop, step) for (ll x = start; x < (ll)(stop); x += step)
#define F2(x, start, stop) F3(x, start, stop, 1)
#define F1(x, stop) F2(x, 0, stop)
#define F(x, ...) GET3(__VA_ARGS__, F3, F2, F1)(x, __VA_ARGS__)
#define FE(x, c) for (auto &x : c)
#define FC(x, c) for (const auto &x : c)

#define SI(x, start, end, cond) auto x = start, e = end; while (x != e && !(cond)) ++x;
#define IBS(x, start, end, cond) ll s = start, x = end; while (x - s > 1) { \
    ll mid = s + (x - s)/2; if (cond) x = mid; else s = mid; }

#define CMA ,

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
