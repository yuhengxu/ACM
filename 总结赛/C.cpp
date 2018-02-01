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
#define maxn 100000+10
#define INF 0x3f3f3f3f
#define esp 1e9
#define con 5
map<string, string>::iterator it;//迭代器 

pair<int, int>a[maxn];
int n, x, y;
int num[maxn];
int main()
{

	while (~scanf("%d", &n))
	{
		for (int i = 1; i <= n; i++)
			scanf("%d %d", &a[i].first, &a[i].second);
		sort(a + 1, a + n + 1);
		a[n + 1].first = -1;
		num[0] = 0;
		int ans = esp;
		for (int i = 1; i <= n; ++i)
		{
			int last = lower_bound(a + 1, a + i, make_pair(a[i].first - a[i].second, -1)) - 1 - a;
			num[i] = num[last] + 1;
			ans = min(ans, n - num[i]);
		}
		printf("%d\n", ans);
	}
}