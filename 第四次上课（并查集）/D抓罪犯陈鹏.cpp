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

int fa[maxn], deep[maxn];
int n, m, no1, no2;
void init(int n)
{
	for (int i = 0; i <= 2*n; i++)
		fa[i] = i, deep[i] = 1;
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
	if (deep[x] > deep[y])fa[y] = x;
	else
	{
		fa[x] = y;
		if (deep[x] == deep[y])deep[y]++;
	}
}
bool same(int x, int y)
{
	return find(x) == find(y);
}
int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		char ch[5];
		scanf("%d %d", &n, &m);
		init(n);
		while(m--)
		{
			scanf("%s %d %d", ch, &no1, &no2);
			if (ch[0] == 'A')//判断
			{
				if (same(no1,no2))
					printf("In the same gang.\n");
				else if (same(no1,no2+n))
					printf("In different gangs.\n");
				else	printf("Not sure yet.\n");
			}
			else
			{
				unite1(no1, no2 + n);
				unite1(no1 + n, no2);
			}
		}
	}
}