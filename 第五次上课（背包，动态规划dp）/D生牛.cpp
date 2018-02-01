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