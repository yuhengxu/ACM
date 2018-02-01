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
#define maxn 50000+10
#define INF 0x3f3f3f3f

int fa[maxn], ran[maxn];
void init(int n)
{
	for (int t = 0; t < n; t++)
		fa[t] = t,	ran[t] = 1;
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
	if (ran[x] > ran[y])fa[y] = x;
	else
	{
		fa[x] = y;
		if (ran[x] == ran[y])ran[x]++;
	}
}
int main()
{
	int n, m, co = 1;//n学生，m行
	while (scanf("%d%d", &n, &m) != EOF)
	{
		if (n == 0 && m == 0)break;
		init(n);//初始化
		int i, j;
		int row, col;
		for (row = 0; row < m; row++)//
		{
			scanf("%d %d", &i, &j);
			unite1(i, j);
		}
		int num = 0;
		for (col = 0; col < n; col++)
			if (fa[col] == col)
				num++;
		printf("Case %d: %d\n", co++, num);
	}
}