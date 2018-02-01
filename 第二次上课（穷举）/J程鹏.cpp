#include<cstdio>//标准输入输出
#include<cmath>//math
#include<iostream>//流输入输出
#include<algorithm>//算法
#include<cstring>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<ctime>
using namespace std;
typedef long long ll;
#define maxn 2000+10
#define INF 0x3f3f3f3f

int r[maxn], l[maxn];
int n, t, rcnt, lcnt;
int main()
{
	int ans, newt, newans;
	while (scanf("%d", &n) != EOF)
	{
		rcnt = lcnt = ans = 0;
		//rcnt存右面得数，lcnt村左面得数，ans是答案
		scanf("%d", &t);
		for (int i = 0; i < n; i++)
		{
			int x;
			scanf("%d", &x);
			if (x > t || x < -t)continue;
			if (x > 0)r[rcnt++] = x;
			else l[lcnt++] = -x;
		}
		sort(r, r + rcnt);
		sort(l, l + lcnt);
		for (int i = 0; i < lcnt; i++)
		{
			newans = i + 1;
			newt = t - l[i] * 2;
			for (int j=0; j < rcnt; j++)
			{
				if (r[j] <= newt)newans++;
				else break;
			}
			ans = max(ans, newans);
		}
		for (int i = 0; i < rcnt; i++)

		{

			newans = i + 1;

			newt = t - r[i] * 2;

			for (int j = 0; j < lcnt; j++)
			{
				if (l[j] <= newt) newans++;
				else break;
			}
			ans = max(ans, newans);
		}
		printf("%d\n", ans);
	}
}