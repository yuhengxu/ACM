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
#define maxn 200000+10
#define INF 0x3f3f3f3f

int fa[maxn], deep[maxn], num[maxn];
void init(int n)
{
	for (int i = 0; i < n; i++)
		fa[i] = i, deep[i] = 0, num[i] = 1;
}
int find(int x)
{
	if (fa[x] == x)return x;
	return fa[x] = find(fa[x]);
}
void unite1(int x, int y)
{
	x = find(x), y = find(y);
	if (x == y)return;
	else fa[x] = y;
}
bool same(int x,int y)
{
	return find(x) == find(y);
}
int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		int n, m, no1, no2, flag = 0;
		int d=-1, s=-2;
		char ch[5];
		scanf("%d %d", &n, &m);
		getchar();
		init(n);
		for (int i = 0; i < m; i++)
		{
			scanf("%s %d %d", ch, &no1, &no2);
			if (ch[0] == 'A')//判断是不是一伙的
			{
				if (fa[no1] == fa[no2])
					printf("In the same gang.\n"); 
				else if ((fa[no1] == s&&fa[no2] == d) || (fa[no1] == d&&fa[no2] == s))
					printf("In different gangs.\n");
				else	printf("Not sure yet.\n");
			}
			else
			{
				if (flag == 0)//第一次录入，设两个代表元素
				{
					fa[no1] = no1;
					fa[no2] = no2;
					flag = 1;
					d = no1;
					s = no2;
				}
				else
				{
					if (same(d, no1))
					{
						unite1(d, no1);
						unite1(s, no2);
					}
					else
					{
						unite1(d, no2);
						unite1(s, no1);
					}
				}
			}
		}
	}
}