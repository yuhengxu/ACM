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
#define maxn 50003*3
#define INF 0x3f3f3f3f

int fa[maxn], n;
void init()
{
	for (int i = 1; i <= 3 * n; i++)  fa[i] = i;
}

int find(int x)
{
	if (x != fa[x]) x = find(fa[x]);
	return fa[x];
}

void unite1(int x, int y)
{
	x = find(x);  y = find(y);
	if (x == y) return;
	else fa[x] = y;
}

bool same(int x, int y)
{
	return find(x) == find(y);
}

int main()
{
	int i, j, k, count = 0;
	scanf("%d %d", &n, &k);
	init();
	while (k--)
	{
		int d, a, b;
		scanf("%d %d %d", &d, &a, &b);
		if (a > n || b > n || a <= 0 || b <= 0 || (d == 2 && a == b)) count++;
		else 
		{
			if (d == 1)
			{
				if (same(a, b + n) || same(a, b + 2 * n))count++;
				else
				{
					unite1(a, b);
					unite1(a + n, b + n);
					unite1(a + 2 * n, b + 2 * n);
				}
			}
			else
			{
				if (same(a, b) || same(a, b + 2 * n))count++;
				else
				{
					unite1(a, b + n);
					unite1(a + n, b + 2 * n);
					unite1(a + 2 * n, b);
				}
			}
		}
	}
	cout << count << endl;
}