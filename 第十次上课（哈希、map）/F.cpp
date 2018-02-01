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
#define maxn 1000000+10
#define INF 0x3f3f3f3f
const int mod = 999997;
ll a[maxn], s[maxn], sum[maxn];
ll n, m;
int fhashadd(int l, int r)
{
	ll nsum = 0;
	nsum = sum[r] - sum[l - 1];
	return nsum%mod;
}
int hashadd(int x)
{
	ll sum1 = 0;
	sum1 = s[x];
	return sum1%mod;
}
int fhashmul(int l, int r)
{
	ll nmul = 1;
	for(int j=l;j<=r;j++)
		nmul = (nmul*a[j]) % mod;
	return nmul%mod;
}
int hashmul(int x)
{
	ll mul = 1;
	for (int j = 2; j <= x; j++)
		mul = (mul*(ll)j) % mod;
	return mul%mod;
}
int main()
{
	while (scanf("%lld %lld", &n, &m)!=EOF)
	{
		sum[0] = (ll)0;
		s[0] = (ll)0;
		for (int i = 1; i <= n; i++)
		{
			scanf("%lld", &a[i]);
			sum[i] = sum[i - 1] + a[i];
			s[i] = s[i-1] + i;
		}
		while (m--)
		{
			int r, l;
			scanf("%d %d", &l,&r);
			if (fhashadd(l, r) == hashadd(r-l+1) && fhashmul(l, r) == hashmul(r-l+1))
				printf("YES\n");
			else printf("NO\n");
		}
	}
}