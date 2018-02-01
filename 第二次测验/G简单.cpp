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
#define maxn 1000
#define INF 0x3f3f3f3f

int x[maxn], y[maxn], a[maxn];
int main()
{
	int lev;
	scanf("%d", &lev);
	int n, m;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &x[i]);
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
		scanf("%d", &y[i]);
	memset(a, -1, sizeof(a));
	a[0] = 1;
	for (int i = 0; i < lev; i++)
	{
		a[x[i]] = 1;
		a[y[i]] = 1;
	}
	for(int i=1;i<=lev;i++)
		if (a[i] == -1)
		{
			printf("Oh, my keyboard!\n");
			return 0;
		}
	printf("I become the guy.\n");
}