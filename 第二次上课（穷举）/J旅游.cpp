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
#define maxn 2005
#define INF 0x3f3f3f3f

int main()
{
	int n, t;
	int x[maxn];
	while (scanf("%d", &n) != EOF)//多个用例
	{
		scanf("%d",  &t);
		int i, mark;
		for (i = 0; i < n; i++)
			scanf("%d", &x[i]);
		sort(x, x + n);
		for (i = 0; i < n; i++)
			if (x[i] >= 0)
			{
				mark = i;
				break;
			}

		int max = 0, j;

		if (x[0] >= 0 || x[n - 1] <= 0)//只有一个方向
		{
			if (x[0] >= 0)//只有大于等于0的方向
			{
				if (t >= x[n - 1])
					max = n;
				else
				{
					for (j = 0; j < n; j++)
						if (x[j] >= t)
							max = j;
				}
			}
			else//只有小于零的方向
			{
				if (t >= abs(x[0]))
					max = n;
				else
				{
					for (j = 0; j < n; j++)
						if (abs(x[j]) <= t)
						{
							max = n - j;
							break;
						}
				}
			}
		}
		else
		{
			for (i = 0; i < n; i++)
			{
				if (abs(x[i]) > t)//到不了
					continue;
				else if (abs(x[i]) > t / 2 && abs(x[i]) < t)//不可返回
				{
					if (abs(mark - i) > max)
						max = mark - i;
				}
				else//可以返回
				{
					for (j = 0; j < n; j++)
						if (t - 2 * abs(x[i]) <= x[j])
							if (abs(j - i) > max)
								max = abs(j - i);
				}
			}
		}
		printf("%d\n", max);
	}
}