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
#define maxn 4000
#define INF 0x3f3f3f3f

const double esp = 1e-6;
int x[maxn];
int a[maxn], b[maxn];
int main()
{
	int n, k, m;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &x[i]);
	int temp = 0, j;
	for (int i = 0; i < n; i++)
	{
		k = x[i];
		m = i;
		for (j = i + 1; j < n; j++)
			if (x[j] < k)
			{
				k = x[j];
				m = j;
			}
		if (k != x[i] && m != i)
		{
			a[temp] = i;
			b[temp++] = m;
		}
		x[m] = x[i];
		x[i] = k;
	}
	printf("%d\n", temp);
	for (int i = 0; i < temp; i++)
		printf("%d %d\n", a[i], b[i]);

}