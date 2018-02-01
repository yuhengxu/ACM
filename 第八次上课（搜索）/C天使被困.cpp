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
#define maxn 1000
#define INF 0x3f3f3f3f

struct node
{
	int ord, step;
	node() {};
	node(int _ord,int _step):
		ord(_ord),step(_step){}
};
int n, m, beginx, beginy;
int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };
char map[maxn][maxn];
queue<node>que;
int bfs(int x,int y)
{
	que.pop;
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || ny < 0 || nx >= n || ny >= m)continue;
		if (map[nx][ny] == 'x')
		{
			-
		}
	}
}
int main()
{
	while (scanf("%d %d", &n, &m))
	{
		for (int i = 0; i < n; i++)scanf("%s", map[i]);
		for (int i = 0; i<n; i++)
			for (int j = 0; j < m; j++)
				if (map[i][j] == 'a')
				{
					beginx = i;
					beginy = j;
				}
		que.push(node(map[beginx][beginy], 1));
		bfs(beginx, beginy);
	}
}