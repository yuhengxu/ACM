#include<cstdio>//标准输入输出
#include<cmath>//math
#include<iostream>//流输入输出
#include<algorithm>//算法
#include<stack>//栈
#include<functional>
#include<cstring>
#include<vector>
#include<queue>//队列
#include<map>
#include<set>
#include<ctime>
using namespace std;
typedef long long ll;
#define INF 0x3f3f3f3f

#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define per(i,a,b) for(int i=(a);i>=(b);i--)
#define pb push_back
#define mp make_pair
#define cl(a) memset((a),0,sizeof(a))
#ifdef HandsomeHow
#define dbg(x) cerr << #x << " = " << x << endl
#else
#define dbg(x)
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef pair <int, int> pii;
const int inf = 0x3f3f3f3f;
const double eps = 1e-8;
const int mod = 1000000007;
const double pi = acos(-1.0);
inline void gn(long long&x) {
	int sg = 1; char c; while (((c = getchar())<'0' || c>'9') && c != '-'); c == '-' ? (sg = -1, x = 0) : (x = c - '0');
	while ((c = getchar()) >= '0'&&c <= '9')x = x * 10 + c - '0'; x *= sg;
}
inline void gn(int&x) { long long t; gn(t); x = t; }
inline void gn(unsigned long long&x) { long long t; gn(t); x = t; }
ll gcd(ll a, ll b) { return a ? gcd(b%a, a) : b; }
ll powmod(ll a, ll x, ll mod) { ll t = 1ll; while (x) { if (x & 1)t = t*a%mod; a = a*a%mod; x >>= 1; }return t; }
const int maxn = 1e5 + 5;
char s[maxn];
int n, a, b;
int main() {
#ifdef HandsomeHow
	//freopen("data.in","r",stdin);
	//freopen("data.out","w",stdout);
#endif
	gn(n); gn(a); gn(b);
	scanf("%s", s + 1);
	int ans;
	if (s[a] == s[b]) ans = 0;
	else ans = 1;
	cout << ans << endl;
	return 0;
}