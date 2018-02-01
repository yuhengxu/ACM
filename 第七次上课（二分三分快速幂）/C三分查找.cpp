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
#define maxn 10000+10
#define INF 0x3f3f3f3f

const double esp = 1e-9;
int coe[maxn][3];
int n;
double cal(double x)
{
	double ans = coe[0][0] * x*x + coe[0][1] * x + coe[0][2];
	for (int i = 1; i < n; i++)
		ans = max(ans, coe[i][0] * x*x + coe[i][1] * x + coe[i][2]);
	return ans;
}
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
			scanf("%d %d %d", &coe[i][0], &coe[i][1], &coe[i][2]);
		double left = 0.0, right = 1000.0, mid, midmid;
			
		while (right-left>esp)
		{
			mid = (left + right) / 2;
			midmid = (mid + right) / 2;
			if (cal(mid) < cal(midmid))
				right = midmid;
			else left = mid;
		}
		printf("%.4lf\n", cal(right));
	}
	return 0;
}