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
#define maxn 1000
#define INF 0x3f3f3f3f

const double esp = 1e-6;
int main()
{
	int m, n;
	int sum = 0, yu = 0;
	scanf("%d %d", &m, &n);
	int k = m;
	while (m)
	{
		sum += m;
		yu+= m;
		m = yu / n;
		yu %= n;
	}
	printf("%d\n", sum);
}