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