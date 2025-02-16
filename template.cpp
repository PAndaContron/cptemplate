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

typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pld;
typedef vector<ll> vll;
typedef vector<ld> vld;
typedef vector<vll> vvll;
typedef vector<vld> vvld;
typedef vector<pll> vpll;
typedef vector<pld> vpld;
typedef vector<vpll> vvpll;
typedef vector<vpld> vvpld;
typedef vector<string> vs;
typedef vector<vs> vvs;

typedef priority_queue<ll, vll, less<ll>> maxpqll;
typedef priority_queue<ld, vld, less<ld>> maxpqld;
typedef priority_queue<ll, vll, greater<ll>> minpqll;
typedef priority_queue<ld, vld, greater<ld>> minpqld;

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
