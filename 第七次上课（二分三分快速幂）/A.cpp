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

int x[maxn];
int stall, cow;

int check(int m)
{
	int tmp = 1;
	int last = x[0];
	for (int i = 1; i < stall; i++)
	{
		if (x[i] - last >= m)
		{
			last = x[i];
			tmp++;
		}
	}
	if (tmp >= cow)
		return 1;
	else return -1;
}
int main()
{
	scanf("%d %d", &stall, &cow);
	for (int i = 0; i < stall; i++)
		scanf("%d", &x[i]);

	sort(x, x + stall);

	int ans = 0;
	int l = 0, r = (x[0] + x[stall - 1]);
	while (r>=l)
	{
		int mid = (l + r) / 2;
		if (check(mid)==1)
		{
			ans = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}
	printf("%d\n", ans);
}