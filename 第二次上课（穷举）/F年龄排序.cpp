#include<cstdio>//标准输入输出
#include<cmath>//math
#include<iostream>//流输入输出
#include<algorithm>//算法
#include<cstring>
#include<cstdlib>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<ctime>
using namespace std;
typedef long long ll;
#define maxn 1000
#define INF 0x3f3f3f3f

struct form
{
	char name[maxn];
	int year;
}mess[maxn];
int cmp(const form &a, const form &b)
{
	return a.year > b.year;
}
int main()
{
	int n, num, i, j;
	char ch[maxn][maxn];
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &num);
		getchar();
		memset(ch, maxn, sizeof(ch));
		for (i = 0; i < num; i++)
			gets_s(ch[i]);
		for (j = 0; j < i; j++)
		{
			int len = strlen(ch[j]);
			mess[j].year = atoi(&ch[j][len-4]);//字符变整形
			strncpy(mess[j].name, ch[j],len - 5);
			mess[j].name[len - 5] = '\0';
		}
		sort(mess, mess + num, cmp);
		for (i = 0; i < num; i++)
			puts(mess[i].name);
	}
}