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
#define maxn 1000
#define INF 0x3f3f3f3f
const int mod = 1e9 + 7;
int ans;
int quickpow(ll a, ll b)
{
	ans = 1;
	while (b)
	{
		if (b & 1)ans =(ans*a)%mod;
		a = (a*a)%mod;
		b >>= 1;
	}
	return ans;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", ((quickpow(27, n) % mod) - (quickpow(7, n)) % mod + mod) % mod);
}