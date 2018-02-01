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

const double esp = 1e-6;
const double e = 2.718281828459;
double x, y;
int flag = 0;
bool cal(double mid)
{
	if (mid / log(mid) >= e * y / log(e * y)) return true;
	return false;
}
double search()
{
	double temp1, temp2;
	double left = 1, right = e, mid;
	while (right<left>esp)
	{
		mid = (left + right) / 2;
		if (cal(mid))right = mid;
		else left = mid;
	}
	temp1 = left;
	left = e, right = (double)INF;
	while (right - left > esp)
	{
		mid = (left + right) / 2;
		if (cal(mid))right = mid;
		else left = mid;
	}
	temp2 = left;
	if (temp2 - temp1 < esp)
	{
		flag = 1;
		printf("%.5f\n", temp1);
	}
	else
	{
		flag = 1;
		printf("%.5f %.5f\n", temp1, temp2);
	}
	return 0;
}
int main()
{
	while (~scanf("%lf", &y))
	{
		if (y == 1)
		{
			printf("%.5f\n", e);
			continue;
		}
		search();
		if (flag == 0)printf("Happy to Women’s day!\n");
	}
	return 0;
}