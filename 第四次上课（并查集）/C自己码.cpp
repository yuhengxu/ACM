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
#define maxn 30000+10
#define INF 0x3f3f3f3f

int fa[maxn], deep[maxn], num[maxn];
void init(int n)
{
	for (int i = 0; i <= n; i++)
	{
		fa[i] = i;
		deep[i] = 0;
		num[i] = 1;
	}
}
int find(int x)
{
	if (fa[x] == x)return x;
	return fa[x] = find(fa[x]);
}
void unite1(int x, int y)
{
	x = find(x), y = find(y);
	if (x == y)
		return;
	if (deep[x] > deep[y])fa[y] = x, num[x] += num[y];
	else
	{
		fa[x] = y, num[y] += num[x];
		if (deep[x] == deep[y])deep[y]++;
	}
}

int main()
{
	int n, m;
	while (~scanf("%d%d", &n, &m))
	{
		init(n);
		int cnt, pre, last;
		if (n == 0 && m == 0)break;
		for (int i = 0; i < m; i++)
		{
			scanf("%d",&cnt);
			if (cnt)scanf("%d", &pre);
			if(cnt>1)
				for (int j = 1; j < cnt; j++)
				{
					scanf("%d", &last);
					unite1(pre, last);
					pre = last;
				}
		}
		printf("%d\n", num[find(0)]);
	}
}