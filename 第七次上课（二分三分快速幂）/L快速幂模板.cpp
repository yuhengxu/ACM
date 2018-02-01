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
#include<iomanip>
using namespace std; 
typedef long long ll;
#define maxn 1000
#define INF 0x3f3f3f3f

double quickpow(double a, ll b)
{
	double ans = 1.0;
	while (b>0)
	{
		if (b & 1)ans *= a;
		a *= a;
		b >>= 1;
	}
	double ans1 = ans;
	return ans1;
}
int main()
{
	ll t;
	int n;
	scanf("%d %lld", &n, &t);
	//cin >> n >> t;
	printf("%.10lf\n", n*quickpow(1.000000011, t));
	//cout << setprecision(25) << n*quickpow(1.000000011, t) << endl;
}