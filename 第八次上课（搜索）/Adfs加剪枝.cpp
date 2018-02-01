#include<cstdio>//标准输入输出
#include<cmath>//math
#include<iostream>//流输入输出
#include<algorithm>//算法
#include<stack>//栈
#include<functional>
#include<cstring>
#include<vector>
#include<queue>//队列
#include<set>
#include<ctime>
using namespace std;
typedef long long ll;
#define maxn 7+10
#define INF 0x3f3f3f3f

char map[maxn][maxn];
int n, m, t, beginx, beginy, endx, endy;
int dx[4] = { 0,-1,0,1 }, dy[4] = { -1,0,1,0 };
bool flag;
bool vis[maxn][maxn];

void dfs(int x, int y, int t)
{
	if (flag) return;
	if (x == endx&&y == endy&&t == 0)
	{
		flag = true;
		return;
	}
	int step = abs(endx - x) + abs(endy - y);//总步数
	if ((t - step) & 1) return;
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
		if (map[nx][ny] == 'X')continue;
		if (vis[nx][ny] == true)continue;
		vis[nx][ny] = true;
		dfs(nx, ny, t - 1);
		vis[nx][ny] = false;
	}
	return;
}

int main()
{
	while (~scanf("%d %d %d", &n, &m, &t))
	{
		if (n == 0 )break;
		flag = false;
		memset(vis, false, sizeof(vis));
		for (int i = 0; i < n; i++)scanf("%s", map[i]);
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
			{
				if (map[i][j] == 'S')
				{
					beginx = i;
					beginy = j;
				}
				if (map[i][j] == 'D')
				{
					endx = i;
					endy = j;
				}
			}
		vis[beginx][beginy] = true;
		dfs(beginx, beginy, t);
		if (flag) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}