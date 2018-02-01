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
#define maxn 1000
#define INF 0x3f3f3f3f
#define con 5
map<string, string>::iterator it;//迭代器 


int main()
{
	double x1, x2, y1, y2;
	double Vx1, Vx2, Vy1, Vy2;
	double t = 4.0;
	t=sqrt(t);
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	scanf("%lf %lf %lf %lf", &Vx1, &Vy1, &Vx2, &Vy2);
	double a = (Vx1 - Vx2)*(Vx1 - Vx2) + (Vy1 - Vy2)*(Vy1 - Vy2);
	double b = 2.0*((Vx2 - Vx1)*(x2 - x1) + (Vy2 - Vy1)*(y2 - y1));
	double c = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
	double ans = (4 * a*c - b*b) / (4 * a);
	double p = -b / (2.0 * a);
	if (p >= 0.0)
	{
		double t = sqrt(ans);
		printf("%.6lf\n",t );
	}
	else
	{
		double t = sqrt(c);
		printf("%.6lf\n", t);
	}
	return 0;
}