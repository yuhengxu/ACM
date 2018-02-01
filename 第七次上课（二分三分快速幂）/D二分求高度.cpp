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
#define pl acos(-1)
const double esp = 1e-9;
double r, R, h, v;
double cal(double a)
{
	double rmid;
	rmid = a*(R - r) / h;
	rmid += r;
	return pl*a*(rmid*rmid + r*r + rmid*r) / 3;
}
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		
		scanf("%lf %lf %lf %lf", &r, &R, &h, &v);
		double left = 0.0, right = h, mid;
		while (right-left>esp)
		{
			mid = (left + right) / 2;
			if (cal(mid) > v)right = mid;
			else left = mid;
		}
		printf("%.6f\n", mid);
	}
}