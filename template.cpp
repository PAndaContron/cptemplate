#include <vector>
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx2")
#include <bits/stdc++.h>

#define INLINE static inline

using namespace std;

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
INLINE void __print(float x) {cerr << x;}
INLINE void __print(double x) {cerr << x;}
INLINE void __print(long double x) {cerr << x;}
INLINE void __print(char x) {cerr << '\'' << x << '\'';}
INLINE void __print(const char *x) {cerr << '"' << x << '"';}
INLINE void __print(const string &x) {cerr << '"' << x << '"';}
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

#define lf "\n"
#define sp " "

#define G(x) ll x; cin >> x;
#define GD(x) ld x; cin >> x;
#define GS(s) string s; cin >> s;
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
