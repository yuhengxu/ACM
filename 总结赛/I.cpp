#include<cstdio>//��׼�������
#include<cmath>//math
#include<iostream>//���������
#include<algorithm>//�㷨
#include<stack>//ջ
#include<functional>
#include<cstring>//�ַ�������
#include<string>//���ĸ��ֶ���
#include<vector>
#include<queue>//����
#include<map>//ӳ��,����������һ��һ
#include<set>
#include<ctime>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const double esp = 1e-6;
#define maxn 1e16
#define INF 0x3f3f3f3f
#define con 5
map<string, string>::iterator it;//������ 

ll cal(ll x)
{
	ll cnt = 0;
	for (ll k = 2; k*k*k <= x; k++)
		cnt += x / (k*k*k);
	return cnt;
}
int main()
{
	ll m;
	scanf("%lld", &m);

	ll right = maxn, left = 1, ans = -1;
	while (left <= right)
	{
		ll mid = (left + right) / 2;
		ll n = cal(mid);
		if (n == m)
			ans = mid;
		if (n >= m)
			right = mid - 1;
		else
			left = mid + 1;
		
	}
	printf("%lld\n", ans);
	return 0;
}