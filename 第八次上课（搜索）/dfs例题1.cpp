#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define MP(A, B) make_pair(A, B)
#define pb push_back
#define gcd __gcd
#define foreach(it,a) for(__typeof((a).begin()) it=(a).begin();it!=(a).end();it++)
#define rep(i, a, b) for(int i = a; i < b; i++)
#define per(i, a, b) for(int i = a; i > b; i--)
typedef long long ll;
typedef unsigned long long ulls;
typedef unsigned int uint;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef map<int, int> mii;
typedef map<string, int> msi;
typedef map<pii, int> mpi;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 1e9 + 7;
const double pi = acos(-1.0);
const double eps = 1e-6;
const int maxn = 1e1 + 5;
const int maxm = 1e6 + 5;
const int dx[] = {-1, 0, 1, 0, -1, -1, 1, 1};
const int dy[] = {0, 1, 0, -1, 1, -1, 1, -1};
inline int scan(int &a) { return scanf("%d", &a); }
inline int scan(int &a, int &b) { return scanf("%d%d", &a, &b); }
inline int scan(int &a, int &b, int &c) { return scanf("%d%d%d", &a, &b, &c); }
inline int scan(ll &a) { return scanf("%I64d", &a); }
inline int scan(ll &a, ll &b) { return scanf("%I64d%I64d", &a, &b); }
inline int scan(ll &a, ll &b, ll &c) { return scanf("%I64d%I64d%I64d", &a, &b, &c); }
inline int scan(double &a) { return scanf("%lf", &a); }
inline int scan(double &a, double &b) { return scanf("%lf%lf", &a, &b); }
inline int scan(double &a, double &b, double &c) { return scanf("%lf%lf%lf", &a, &b, &c); }
inline int scan(char &a) { return scanf("%c", &a); }
inline int scan(char *a) { return scanf("%s", a); }
template<class T> inline void mem(T &A, int x) { memset(A, x, sizeof(A)); }
template<class T0, class T1> inline void mem(T0 &A0, T1 &A1, int x) { mem(A0, x), mem(A1, x); }
template<class T0, class T1, class T2> inline void mem(T0 &A0, T1 &A1, T2 &A2, int x) { mem(A0, x), mem(A1, x), mem(A2, x); }
template<class T0, class T1, class T2, class T3> inline void mem(T0 &A0, T1 &A1, T2 &A2, T3 &A3, int x) { mem(A0, x), mem(A1, x), mem(A2, x), mem(A3, x); }
template<class T0, class T1, class T2, class T3, class T4> inline void mem(T0 &A0, T1 &A1, T2 &A2, T3 &A3, T4 &A4, int x) { mem(A0, x), mem(A1, x), mem(A2, x), mem(A3, x), mem(A4, x); }
template<class T0, class T1, class T2, class T3, class T4, class T5> inline void mem(T0 &A0, T1 &A1, T2 &A2, T3 &A3, T4 &A4, T5 &A5, int x) { mem(A0, x), mem(A1, x), mem(A2, x), mem(A3, x), mem(A4, x), mem(A5, x); }
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6> inline void mem(T0 &A0, T1 &A1, T2 &A2, T3 &A3, T4 &A4, T5 &A5, T6 &A6, int x) { mem(A0, x), mem(A1, x), mem(A2, x), mem(A3, x), mem(A4, x), mem(A5, x), mem(A6, x); }
template<class T> inline T min(T a, T b, T c) { return min(min(a, b), c); }
template<class T> inline T max(T a, T b, T c) { return max(max(a, b), c); }
template<class T> inline T min(T a, T b, T c, T d) { return min(min(a, b), min(c, d)); }
template<class T> inline T max(T a, T b, T c, T d) { return max(max(a, b), max(c, d)); }
template<class T> inline T min(T a, T b, T c, T d, T e) { return min(min(min(a,b),min(c,d)),e); }
template<class T> inline T max(T a, T b, T c, T d, T e) { return max(max(max(a,b),max(c,d)),e); }
int ans;
vector<int> g[maxn];
int vis[maxn];
void dfs(int u, int dis) {
    if(u == 9) ans = min(ans, dis);

    foreach(v, g[u]) {
        if(!vis[*v]) {
            vis[*v] = 1;
            dfs(*v, dis + 1);
            vis[*v] = 0;
        }
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
        long _begin_time = clock();
    #endif

    int n, m; scan(n, m);
    while(m--) {
        int u, v; scan(u, v);
        g[u].pb(v);
        g[v].pb(u);
    }

    mem(vis, 0); ans = INF;

    vis[1] = 1;
    dfs(1, 0);

    printf("%d\n", ans);

    #ifndef ONLINE_JUDGE
        long _end_time = clock();
        printf("time = %ld ms\n", _end_time - _begin_time);
    #endif

    return 0;
}
// 9 11
// 1 2
// 1 5
// 1 7
// 2 3
// 2 5
// 3 4
// 5 6
// 6 7
// 6 8
// 8 9