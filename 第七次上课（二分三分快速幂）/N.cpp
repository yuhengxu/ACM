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
using namespace std;
typedef long long ll;
#define maxn 20
#define INF 0x3f3f3f3f

int quickpow(ll a, ll b)//�������㷨
{
	int ans = 1;
	while (b)
	{
		if (a >= 10)a = a % 10;
		if (b & 1)ans = (ans*a) % 10;
		a *= a;
		b >>= 1;//λ���㣬�ȼ���k/=2;
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