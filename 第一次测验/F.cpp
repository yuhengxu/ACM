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
#define maxn 1000+10
#define INF 0x3f3f3f3f
int map1[maxn];
int n, flag = 0;//n盏灯
int main()
{
	int l;//街道长
	scanf("%d %d", &n, &l);
	for (int i = 0; i < n; i++)
		scanf("%d", &map1[i]);
	sort(map1, map1 + n);
	double maxs=0.0;
	maxs = max(map1[0], l - map1[n - 1]);
	for (int i = 1; i < n; i++)
		maxs = max(maxs, (map1[i] - map1[i - 1])/2.0);
	printf("%.10lf\n", maxs);
}