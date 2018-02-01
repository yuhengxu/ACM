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


int n, m;
int dist[2005][2005];
char str1[2005];
char str2[2005];

void dfs()
{
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
		{
			if (str1[i] == str2[j])
				dist[i][j] = dist[i - 1][j - 1] + 1;
			else
				dist[i][j] = max(dist[i - 1][j], dist[i][j - 1]);
		}
}
int main()
{
	while (scanf("%s %s", str1 + 1, str2 + 1) != EOF)
	{
		n = strlen(str1 + 1);
		m = strlen(str2 + 1);
		for (int i = 0; i <= n; i++)
			dist[i][0] = 0;
		for (int j = 0; j <= m; j++)
			dist[0][j] = 0;
		dfs();
		printf("%d\n", dist[n][m]);
	}
	return 0;
}
