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

struct form//对照表
{
	char x;
	char y;
}f[maxn];

int col,row;//对照表个数,循环次数

int compare(char *x,char *m)
{
	char zhan[maxn];
	memset(zhan, '\0', sizeof(zhan));
	char *top=zhan, *base=zhan;
	for (int i = 0; i < strlen(m); i++)
	{
		*top++ = m[i];
		if (x[i] == m[i])
			top--;
		else
		{
			for (int j = 0; j < col; j++)
				if (m[i] == f[j].x)
					m[i] = f[j].y;
			if (x[i] = m[i])
				top--;
		}
	}
	if (top == base || top == base + 1)
		return 0;
	else return 1;
}

int main()
{
	int T;
	scanf("%d", &T);
	getchar();
	char chx[maxn], chm[maxn];
	for (row = 1; row <= T; row++)
	{
		gets_s(chx);
		gets_s(chm);

		int chg;
		scanf("%d", &chg);
		getchar();
		for (col = 0; col < chg; col++)//对照表录入数据
			scanf("%c %c", &f[col].x, &f[col].y);

		int flag = 0;
		if (strlen(chx)+1 < strlen(chm))//长度超过2就unhappy
			printf("Case #%d: unhappy\n", row);
		else
		{
			if(compare(chx, chm)==0)
				printf("Case #%d: happy\n", row);
			else printf("Case #%d: unhappy\n", row);
		}
	}
}