#include<cstdio>//��׼�������
#include<cmath>//math
#include<iostream>//���������
#include<algorithm>//�㷨
#include<stack>//ջ
#include<functional>
#include<cstring>
#include<vector>
#include<queue>//����
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