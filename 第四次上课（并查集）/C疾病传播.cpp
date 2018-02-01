#include<cstdio>//��׼�������
#include<cmath>//math
#include<iostream>//���������
#include<algorithm>//�㷨
#include<stack>//ջ
#include<functional>
#include<cstring>
#include<vector>
#include<queue>//����
#include<map>
#include<set>
#include<ctime>
using namespace std;
typedef long long ll;
#define maxn 30000+10
#define INF 0x3f3f3f3f

int fa[maxn], ran[maxn], num[maxn];
void init(int n)
{
	for (int t = 0; t <= n; t++)
		fa[t] = t, ran[t] = 0, num[t] = 1;
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
	if (ran[x] > ran[y])fa[y] = x, num[x] += num[y];
	else
	{
		fa[x] = y, num[y] += num[x];
		if (ran[x] == ran[y])ran[y++]++;
	}
}
int main()
{
	int n, m;
	while (~scanf("%d%d", &n, &m))//���ٴε���
	{
		if (n == 0&& m == 0)break;
		init(n);
		for (int i = 0; i < m; i++)//���ж��ٸ���
		{
			int cnt, pre, last;
			scanf("%d", &cnt);
			if (cnt)scanf("%d", &pre);
			if(cnt>1)
				for (int j = 1;j < cnt; j++)//ÿ����ٳ�Ա
				{
					scanf("%d", &last);
					unite1(pre, last);
					pre = last;
				}
		}
		printf("%d\n", num[find(0)]);
	}
}