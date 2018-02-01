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

int dp[maxn][maxn];
int main()
{
	int c;
	scanf("%d", &c);
	while (c--)
	{
		int n, i, j;
		scanf("%d", &n);
		for (i = 0; i < n; i++)
			for (j = 0; j <= i; j++)
				scanf("%d", &dp[i][j]);
		for (i = n - 1; i >= 0; i--)
			for (j = 0; j <= i; j++)
				dp[i][j] += max(dp[i + 1][j + 1], dp[i + 1][j]);
		printf("%d\n", dp[0][0]);
	}
}