#include<cstdio>//标准输入输出
#include<cmath>//math
#include<iostream>//流输入输出
#include<algorithm>//算法
#include<stack>//栈
#include<functional>
#include<cstring>//字符串函数
#include<string>//串的各种东西
#include<vector>
#include<queue>//队列
#include<map>//映射,关联容器，一对一
#include<set>
#include<ctime>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const double esp = 1e-6;
#define maxn 1000+10
#define INF 0x3f3f3f3f
#define typec int
map<string, string>::iterator it;//迭代器 
int n, m, endq;
bool vis[maxn];
int cnt[maxn], dist[maxn];
struct Edge
{
	int v;
	int cost;
	Edge(int _v = 0, int _cost = 0) :v(_v), cost(_cost) {}
};
vector<Edge>E[maxn];
void addedge(int u, int v, int w)
{
	E[u].push_back(Edge(v, w));
}
bool SPFA(int start, int n)
{
	memset(vis, false, sizeof(vis));
	for (int i = 1; i <= n; i++)dist[i] = INF;
	vis[start] = true;
	dist[start] = 0;
	queue<int>que;
	while (!que.empty())que.pop();
	que.push(start);
	memset(cnt, 0, sizeof(cnt));
	cnt[start] = 1;
	while (!que.empty())
	{
		int u = que.front();
		que.pop();
		vis[u] = false;
		for (int i = 0; i < E[u].size(); i++)
		{
			int v = E[u][i].v;
			if (dist[v] > dist[u] + E[u][i].cost)
			{
				dist[v] = dist[u] + E[u][i].cost;
				if (!vis[v])
				{
					vis[v] = true;
					que.push(v);
					if (++cnt[v] > n)return false;
				}
			}
		}
	}
	return true;
}
int main()
{
	while (~scanf("%d %d %d", &n, &m, &endq))
	{
		for (int i = 1; i <= n; i++)E[i].clear();
		for (int i = 1; i <= m; i++)
		{
			int from, to, cost;
			scanf("%d %d %d", &from, &to, &cost);
			addedge(to, from, cost);
		}
		int beg[maxn], begn;
		scanf("%d", &begn);
		for (int i = 1; i <= begn; i++)
			scanf("%d", &beg[i]);
		int ans = INF;
		if (SPFA(endq, n))
		{
			for (int i = 1; i <= begn; i++)
				ans = min(ans, dist[beg[i]]);
			if (ans == INF)printf("-1\n");
			else printf("%d\n", ans);
		}
	}
	return 0;
}