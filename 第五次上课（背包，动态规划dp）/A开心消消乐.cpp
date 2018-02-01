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

char str[maxn];
int dp[maxn][maxn];
int solve(int left, int right)
{
	if (left > right || dp[left][right] == 1)
		return 1;
	if (left == right || dp[left][right] == -1)
		return -1;
	for (int i = left + 1; i <= right - 2; i++)
	{
		if (solve(left, i) ==  1 && solve(i + 1, right) == 1)
			return dp[left][right] = 1;
	}
	if (str[left] == str[right])
	{
		if (solve(left + 1, right - 1) == 1)
			return dp[left][right] = 1;
		for (int i = left + 1; i <= right - 1; i++)
		{
			if (str[left] == str[i])
			{
				if (solve(left + 1, i - 1) == 1 && solve(i + 1, right - 1) == 1)
					return dp[left][right]=1;
			}
		}
	}
	return dp[left][right] = -1;
}
int main()
{
	while (scanf("%s", str) != EOF)
	{
		memset(dp, 0, sizeof(dp));
		if (solve(0, strlen(str) - 1) == 1)
			printf("solvable\n");
		else printf("unsolvable\n");
	}
	return 0;
}