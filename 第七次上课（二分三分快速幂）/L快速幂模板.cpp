#include<cstdio>//��׼�������
#include<cmath>//math
#include<iostream>//���������
#include<algorithm>//�㷨
#include<stack>//ջ
#include<functional>
#include<cstring>
#include<vector>
#include<queue>//����
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