#include<cstdio>//标准输入输出
#include<cmath>//math
#include<iostream>//流输入输出
#include<algorithm>//算法
#include<functional>
#include<cstring>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<ctime>
using namespace std;
typedef long long ll;
#define maxn 2000+10
#define INF 0x3f3f3f3f

ll ans[maxn];
ll top;
int main()
{
	int n, i = 0;
	priority_queue<ll, vector<ll>, greater<ll>>small;//小顶堆
	while (!small.empty())small.pop();
	i = 1;
	ans[0] = INF;
	small.push(1);
	while (i<=1500)
	{
		top = small.top();
		small.pop();
		if (top == ans[i - 1])continue;
		ans[i++] = top;
		small.push(top * 2);
		small.push(top * 3);
		small.push(top * 5);
		
	}
	while(scanf("%d",&n)!=EOF)
	{
		if (n == 0)break;
		printf("%lld\n", ans[n]);
	}
}