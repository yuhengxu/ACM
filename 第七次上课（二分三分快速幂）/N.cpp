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
#define maxn 20
#define INF 0x3f3f3f3f

int quickpow(ll a, ll b)//快速幂算法
{
	int ans = 1;
	while (b)
	{
		if (a >= 10)a = a % 10;
		if (b & 1)ans = (ans*a) % 10;
		a *= a;
		b >>= 1;//位运算，等价于k/=2;
	}
	return ans;
}
int main()
{
	ll a, b;
	while(~scanf("%d %d", &a,&b))
		printf("%d\n", quickpow(a, b));

	return 0;
}