#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

#define pb push_back
#define foreach(it,a) for(__typeof((a).begin()) it=(a).begin();it!=(a).end();it++) //g++下可用
inline int scan(int &a) { return scanf("%d", &a); }
inline int scan(int &a, int &b) { return scanf("%d%d", &a, &b); }

const int maxn = 1e3 + 5;    //点的数量

vector<int> g[maxn];

int main() {
	int n, m; scanf("%d%d", &n, &m);    //n个点，m条边

	//无边权 只表示关系
	while (m--) {
		int u, v; scan(u, v);
		g[u].pb(v);
		g[v].pb(u);                     //无向图
	}

	//遍历u为顶点的所有边
	//c++11
	int u;
	for (auto v : g[u]) {
		//do something
		printf("%d\n", v);
	}
	//normal
	int u;
	foreach (v, g[u]) {
		//do something
		printf("%d\n", *v);
	}

	return 0;
}