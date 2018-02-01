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
#define maxn 1000+10
#define INF 0x3f3f3f3f

int a[maxn];
int main()
{
	int n, top;
	bool flag;
	stack<int>s;
	while (scanf("%d", &n) != EOF)
	{
		if (n == 0)break;
		top = 1;
		while (scanf("%d", &a[0]) != EOF)
		{
			if (a[0] == 0)break;
			top = 1;
			while (!s.empty())s.pop();
				flag = true;
			for (int i = 1; i < n; i++)scanf("%d", &a[i]);
			for (int i = 0; i < n; i++)
			{
				if (s.empty() || s.top() != a[i])
				{
					if (top > a[i])
					{
						flag = false;
						break;
					}
					for (int j = top; j < a[i]; j++)s.push(j);
					top = a[i] + 1;
				}
				else s.pop();
			}
			if (flag)printf("Yes\n");
			else printf("No\n");
		}
		printf("\n");
	}
	return 0;
}