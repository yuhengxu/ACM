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

int main()
{
	int n;
	int num[maxn];
	while (~scanf("%d", &n))
	{
		if (n == 0)break;
		for (int j = 1; j <= 3; j++)
			num[j] = j;
		for (int i = 4; i <=n; i++)
			num[i] = num[i - 1] + num[i - 3];
		printf("%d\n", num[n]);
	}
}