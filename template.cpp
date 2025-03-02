#include <vector>
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx2")
#include <bits/stdc++.h>

#define INLINE static inline

using namespace std;

#ifndef typeof
#define typeof __typeof__
#endif

#define CONCAT_IMPL( x, y ) x##y
#define MACRO_CONCAT( x, y ) CONCAT_IMPL( x, y )
#define PANDAID MACRO_CONCAT(__panda_, __COUNTER__)

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

template <typename T = ll> using frmap = map<T, ll>;

template <typename T = ll> using maxpq = priority_queue<T, vector<T>, less<T>>;
template <typename T = ll> using minpq = priority_queue<T, vector<T>, greater<T>>;
using maxpqll = maxpq<>;
using maxpqld = maxpq<ld>;
using minpqll = minpq<>;
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

#define GET2(a, b, c, ...) c
#define GET3(a, b, c, d, ...) d

#define EX(x) { cout << (x) << '\n'; exit(0); }
#define A(a) (a).begin(), (a).end()
#define MULT G(__panda_T) while(__panda_T--)
#define YN(c) cout << ((c) ? "YES\n" : "NO\n");
#define K first
#define V second

#define F3(x, start, stop, step) for (ll x = ll(start); x < ll(stop); x += ll(step))
#define F2(x, start, stop) F3(x, start, stop, 1)
#define F1(x, stop) F2(x, 0, stop)
#define F(x, a...) GET3(a, F3, F2, F1)(x, a)

// FRE iterates over the same values as F with the same args, just in reverse
#define FRE3(x, start, stop, step) for (ll x = ll(stop) - 1 - abs(ll(stop) - 1 - ll(start)) % ll(step); x >= ll(start); x -= ll(step))
#define FRE2(x, start, stop) for (ll x = ll(stop) - 1; x >= ll(start); x--)
#define FRE1(x, stop) FRE2(x, 0, stop)
#define FRE(x, a...) GET3(a, FRE3, FRE2, FRE1)(x, a)

// FR copies python reverse range syntax, except step should always be positive
// stop defaults to -1
#define FR3(x, start, stop, step) for (ll x = ll(start); x > ll(stop); x -= ll(step))
#define FR2(x, start, stop) FR3(x, start, stop, 1)
#define FR1(x, start) FR2(x, start, -1)
#define FR(x, a...) GET3(a, FR3, FR2, FR1)(x, a)

#define FE1(x, c) for (auto &x : (c))
#define FC1(x, c) for (const auto &x : (c))
#define FER1(x, c) FE1(x, (c) | views::reverse)
#define FCR1(x, c) FC1(x, (c) | views::reverse)

#define FE2(x, y, c) for (auto &[x, y] : (c))
#define FC2(x, y, c) for (const auto &[x, y] : (c))
#define FER2(x, y, c) FE2(x, y, (c) | views::reverse)
#define FCR2(x, y, c) FC2(x, y, (c) | views::reverse)

#define FE(a1, a...) GET2(a, FE2, FE1)(a1, a)
#define FC(a1, a...) GET2(a, FC2, FC1)(a1, a)
#define FER(a1, a...) GET2(a, FER2, FER1)(a1, a)
#define FCR(a1, a...) GET2(a, FCR2, FCR1)(a1, a)

#define GT(T, x) T x; cin >> x;
#define Gr(x) GT(ll, x)
#define G(x...) APPLY(Gr, x)
#define GDr(x) GT(ld, x)
#define GD(x...) APPLY(GDr, x)
#define GSr(s) GT(string, x)
#define GS(s...) APPLY(GSr, s)

#define GAr(n, c, it) F(it, n) cin >> (c)[it];
#define GA(n, c) GAr(n, c, PANDAID)

#define GCa(n, c, add) F(PANDAID, n) { typeof(*(c).begin()) x; cin >> x; (c).add(x); }
#define GPQ(n, c) F(PANDAID, n) { auto x = typeof((c).top()) {}; cin >> x; (c).push(x); }

template <typename T> INLINE void GCcr(ll n, vector<T> &c) { GCa(n, c, push_back) }
template <typename T> INLINE void GCcr(ll n, set<T> &c) { GCa(n, c, insert) }
template <typename T> INLINE void GCcr(ll n, minpq<T> &c) { GPQ(n, c) }
template <typename T> INLINE void GCcr(ll n, maxpq<T> &c) { GPQ(n, c) }
template <typename T> INLINE void GCcr(ll n, frmap<T> &c) { F(i, n) { GT(T, x) c[x]++; } }
template <typename T> INLINE void GCcr(ll n, T *c) { GA(n, c) }
#define GCc(a...) GCcr(a);

#define GC(n, a...) GET2(a, GCa, GCc)(n, a)
#define GL(n, a...) G(n) GC(n, a)

#define GV(n, v) vll v; GC(n, v)
#define GVL(n, v) G(n) GV(n, v)

#define GF(n, f) frmap<> f; GC(n, f)
#define GFL(n, f) G(n) GF(n, f)

#define GC2r(n, m, it, c) F(it, n) { GC(m, c[it]) }
#define GC2(n, m, c) GC2r(n, m, PANDAID, c)
#define GL2(n, m, c) G(n, m) GC2(n, m, c)

template <typename T, typename... V> INLINE void INSr(vector<T> &c, V... v) { c.emplace_back(v...); }
template <typename T, typename... V> INLINE void INSr(set<T> &c, V... v) { c.emplace(v...); }
template <typename T, typename... V> INLINE void INSr(minpq<T> &c, V... v) { c.emplace(v...); }
template <typename T, typename... V> INLINE void INSr(maxpq<T> &c, V... v) { c.emplace(v...); }
template <typename TK, typename TV> INLINE void INSr(map<TK, TV> &c, TK k, TV v) { c.emplace(k, v); }
template <typename T, typename... V> INLINE void INSr(frmap<T> &c, V... v) { c[{v...}]++; }
#define INS(a...) INSr(a);

#define INSIr(it, e, dest, start, end) for (auto it = (start), e = (end); it != e; ++it) INS((dest), *it)
#define INSIi(dest, start, end) INSIr(PANDAID, PANDAID, dest, start, end)
#define INSIc(dest, cont) INSIi(dest, (cont).cbegin(), (cont).cend())
#define INSI(dest, ax...) GET2(ax, INSIi, INSIc)(dest, ax)

#define MKINSIi(ty, dest, start, end) ty<typeof(typeof(*start) {})> dest; INSIi(dest, start, end)
#define MKINSIc(ty, dest, cont) MKINSIi(ty, dest, (cont).cbegin(), (cont).cend())
#define MKINSI(ty, dest, ax...) GET2(ax, MKINSIi, MKINSIc)(ty, dest, ax)

#define FREQ(dest, ax...) MKINSI(frmap, dest, ax)
#define MKSET(dest, ax...) MKINSI(set, dest, ax)
#define MKVEC(dest, ax...) MKINSI(vector, dest, ax)
#define MKMINPQ(dest, ax...) MKINSI(minpq, dest, ax)
#define MKMAXPQ(dest, ax...) MKINSI(maxpq, dest, ax)

template <typename T> INLINE void GRPHf(T &grph, const set<pll> &eset) { for (auto &[x, y] : eset) { INS(grph[x], y) } }
template <typename T> INLINE void GRPHf(const set<pll> &eset, T &grph) { GRPHf(grph, eset); }
template <typename T> INLINE void GRPHf(T &grph, const set<pair<pll, ll>> &eset) { for (auto &[xy, w] : eset) { auto [x, y] = xy; INS(grph[x], y, w) } }
template <typename T> INLINE void GRPHf(const set<pair<pll, ll>> &eset, T &grph) { GRPHf(grph, eset); }
#define GRPH(a...) GRPHf(a);

template <typename T> INLINE void WGRPHf(T &grph, const set<pair<pll, ll>> &eset) { GRPH(grph, eset) }
template <typename T> INLINE void WGRPHf(const set<pair<pll, ll>> &eset, T &grph) { GRPH(grph, eset) }
#define WGRPH(a...) WGRPHf(a);

template <typename T> INLINE void DGRPHf(const ll n, T &grph) { F(PANDAID, n) { G(x) G(y) x--, y--; INS(grph[x], y) } }
template <typename T> INLINE void DGRPHf(T &grph, const ll n) { DGRPHf(n, grph); }
template <typename T> INLINE void DGRPHf(T &grph, const set<pll> &eset) { GRPH(grph, eset) }
template <typename T> INLINE void DGRPHf(const set<pll> &eset, T &grph) { GRPH(grph, eset) }
template <typename T> INLINE void DGRPHf(T &grph, const set<pair<pll, ll>> &eset) { GRPH(grph, eset) }
template <typename T> INLINE void DGRPHf(const set<pair<pll, ll>> &eset, T &grph) { GRPH(grph, eset) }
#define DGRPH(a...) DGRPHf(a);

template <typename T> INLINE void UGRPHf(const ll n, T &grph) { F(PANDAID, n) { G(x) G(y) x--, y--; INS(grph[x], y) INS(grph[y], x) } }
template <typename T> INLINE void UGRPHf(T &grph, const ll n) { UGRPHf(n, grph); }
template <typename T> INLINE void UGRPHf(T &grph, const set<pll> &eset) { for (auto &[x, y] : eset) { INS(grph[x], y) INS(grph[y], x) } }
template <typename T> INLINE void UGRPHf(const set<pll> &eset, T &grph) { UGRPHf(grph, eset); }
template <typename T> INLINE void UGRPHf(T &grph, const set<pair<pll, ll>> &eset) { for (auto &[xy, w] : eset) { auto [x, y] = xy; INS(grph[x], y, w) INS(grph[y], x, w) } }
template <typename T> INLINE void UGRPHf(const set<pair<pll, ll>> &eset, T &grph) { UGRPHf(grph, eset); }
#define UGRPH(a...) UGRPHf(a);

template <typename T> INLINE void DWGRPHf(const ll n, T &grph) { F(PANDAID, n) { G(x) G(y) G(w) x--, y--; INS(grph[x], y, w) } }
template <typename T> INLINE void DWGRPHf(T &grph, const ll n) { DWGRPHf(n, grph); }
template <typename T> INLINE void DWGRPHf(T &grph, const set<pair<pll, ll>> &eset) { GRPH(grph, eset) }
template <typename T> INLINE void DWGRPHf(const set<pair<pll, ll>> &eset, T &grph) { GRPH(grph, eset) }
#define DWGRPH(a...) DWGRPHf(a);

template <typename T> INLINE void UWGRPHf(const ll n, T &grph) { F(PANDAID, n) { G(x) G(y) G(w) x--, y--; INS(grph[x], y, w) INS(grph[y], x, w) } }
template <typename T> INLINE void UWGRPHf(T &grph, const ll n) { UWGRPHf(n, grph); }
template <typename T> INLINE void UWGRPHf(T &grph, const set<pair<pll, ll>> &eset) { UGRPH(grph, eset) }
template <typename T> INLINE void UWGRPHf(const set<pair<pll, ll>> &eset, T &grph) { UGRPH(grph, eset) }
#define UWGRPH(a...) UWGRPHf(a);

#define DESET(n, s) set<pll> s; F(PANDAID, n) { G(x) G(y) x--, y--; INS(s, x, y) }
#define SESET(n, s) set<pll> s; F(PANDAID, n) { G(x) G(y) x--, y--; if (x > y) swap(x, y); INS(s, x, y) }
#define UESET(n, s) set<pll> s; F(PANDAID, n) { G(x) G(y) x--, y--; INS(s, x, y) INS(s, y, x) }
#define DWESET(n, s) set<pair<pll, ll>> s; F(PANDAID, n) { G(x) G(y) G(w) x--, y--; INS(s, pll {x, y}, w) }
#define SWESET(n, s) set<pair<pll, ll>> s; F(PANDAID, n) { G(x) G(y) G(w) x--, y--; if (x > y) swap(x, y); INS(s, pll {x, y}, w) }
#define UWESET(n, s) set<pair<pll, ll>> s; F(PANDAID, n) { G(x) G(y) G(w) x--, y--; INS(s, pll {x, y}, w) INS(s, pll {y, x}, w) }

#define DGRPHL(n, a...) G(n) DGRPH(n, a)
#define UGRPHL(n, a...) G(n) UGRPH(n, a)
#define DWGRPHL(n, a...) G(n) DWGRPH(n, a)
#define UWGRPHL(n, a...) G(n) UWGRPH(n, a)
#define DESETL(n, a...) G(n) DESET(n, a)
#define SESETL(n, a...) G(n) SESET(n, a)
#define UESETL(n, a...) G(n) UESET(n, a)
#define DWESETL(n, a...) G(n) DWESET(n, a)
#define SWESETL(n, a...) G(n) SWESET(n, a)
#define UWESETL(n, a...) G(n) UWESET(n, a)

#define SIr(x, e, start, end, cond) auto x = (start), e = (end); while (x != e && !(cond)) ++x;
#define SIi(x, start, end, cond) SIr(x, PANDAID, start, end, cond)
#define SIc(x, cont, cond) SIi(x, (cont).cbegin(), (cont).cend(), cond)
#define SI(x, a1, ax...) GET2(ax, SIi, SIc)(x, a1, ax)

#define IBSr(x, s, start, end, cond) typeof(start) s = (start), x = (end); while (x - s > 1) { \
    ll mid = s + (x - s)/2; if (cond) x = mid; else s = mid; }
// cond should be true on the RIGHT, expressed in terms of `mid`
// x will be the smallest value that keeps cond true
#define IBS(x, start, end, cond) IBSr(x, PANDAID, start, end, cond)

#define CMA ,

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
