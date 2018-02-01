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

int main()
{
	double len, n, c;
	double right, left, mid, r;
	double len2;
	while (~scanf("%lf %lf %lf", &len, &n, &c))
	{
		if (len == -1)break;
		left = 0, right = len, len2 = (1.0 + n*c)*len;
		while (right - left > esp)
		{
			mid = (left + right) / 2;
			r = (mid*mid + len*len / 4) / (mid * 2);
			if (r*asin(len / (2 * r)) < len2 / 2)
				left = mid;
			else right = mid;
		}
		printf("%.3lf\n", mid);
	}
	return 0;
}