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
int arr[30][2] = { 0 };
int main()
{
	int amount;
	int i, j;
	scanf("%d", &amount);
	for (i = 0; i<amount; i++)
	{
		scanf("%d %d", &arr[i][0],&arr[i][1]);
	}
	int host, ans = 0;
	for (i = 0; i<amount; i++)
	{
		host = arr[i][0];
		for (j = 0; j<amount; j++)
		{
			if (host == arr[j][1])
				ans++;
		}
	}
	printf("%d\n", ans);
	return 0;

}