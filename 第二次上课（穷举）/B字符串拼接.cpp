#include<cstdio>//标准输入输出
#include<cmath>//math
#include<iostream>//流输入输出
#include<algorithm>//算法
#include<cstring>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<ctime>
using namespace std;
typedef long long ll;
#define maxn 100
#define INF 0x3f3f3f3f

int main()
{
	int n;
	scanf("%d", &n);
	getchar();
	char ch1[maxn], ch2[maxn], ch[maxn];
	while (n--)
	{
		gets_s(ch1);
		gets_s(ch2);
		int len1 = strlen(ch1), len2 = strlen(ch2);
		memset(ch, '\0', sizeof(ch));
		int i = 0, j = 0;
		for (i = 0; i < len1 / 2; i++)
			ch[i] = ch1[i];
		for (j = 0; j < len2; j++)
			ch[j+i] = ch2[j];
		for (; i < len1; i++)
		{
			j = len2 + i;
			ch[j] = ch1[i];
		}
		puts(ch);
	}
	return 0;
}