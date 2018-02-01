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
#define maxn 5000
#define INF 0x3f3f3f3f
const double esp = 1e-6;
int main()
{
	int n, m, i, j;
	int w[4000], p[4000];
	while (scanf("%d%d", &n, &m) != EOF)
	{
		int c[20000] = { 0 };//赋零值，下面比较用
		for (i = 1; i <= n; i++)
			scanf("%d%d", &w[i], &p[i]);
		for (i = 1; i <= n; i++)//循环n件物品
			for (j = m; j >= w[i]; j--)//循环重量，0到m，不断比较加上第i件物品与不加上第i件物品的价值，值大的赋值给c[j]
				c[j] = max(c[j], c[j - w[i]] + p[i]);
		printf("%d\n", c[m]);
	}
	return 0;
}