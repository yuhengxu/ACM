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
#define maxn 100000+10
#define INF 0x3f3f3f3f

const double esp = 1e-6;
int n, t;
int st[maxn], a[maxn], l[maxn], r[maxn];
void monotoneL()//，向左找，找到第一个比当前小的数，存在L中
{
	t = 0;
	for (int i = 1; i <= n; i++)
	{
		while (t > 0 && a[st[t - 1]] >= a[i])
			t--;
		l[i] = t == 0 ? 0 : st[t - 1];
		st[t++] = i;
	}
}
void monotoneR()//往右找
{
	t = 0;
	for (int i = n; i > 0; i--)
	{
		while (t > 0&&a[st[t - 1]] >= a[i])
			t--;
		r[i] = t == 0 ? (n + 1) : st[t - 1];
		st[t++] = i;
	}
}
int main()
{
	while (~scanf("%d", &n))
	{
		ll ans = 0;//存面积
		if (n == 0)break;
		for (int i = 1; i <= n; i++)
			scanf("%d", &a[i]);
		monotoneL();
		monotoneR();

		for (int j = 1; j <= n; j++)
			ans = max(ans, (ll)a[j] * (r[j] - l[j] - 1));
		printf("%lld\n", ans);
	}
	return 0;
}