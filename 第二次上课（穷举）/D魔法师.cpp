#include<cstdio>//��׼�������
#include<cmath>//math
#include<iostream>//���������
#include<algorithm>//�㷨
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

struct form//��ĸ�仯��
{
	char x;
	char y;
}f[maxn];

int main()
{
	int T, row, t = 0;
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
		int col;//��¼���ձ���Ԫ�ظ���
		for (col = 0; col < chg; col++)//¼��仯���ձ�
			scanf("%c %c", &f[col].x, &f[col].y);

		int i, j;
		int tip=0;
		for (i = 0, j = 0; i < strlen(chx); i++)
		{
			if (chx[i] == chm[j])
			{
				j++;
				continue;
			}
			else 
			{
				for(;j<strlen(chm);j++)
				{
					for (tip = 0; tip < chg; tip++)
					{
						if (chm[j] == f[tip].x)
						{
							chm[j] == f[tip].y;
						}
					}
					if (chx[i] == chm[j])
						break;
				}
				j++;
			}
			if (j == strlen(chm) + 1)break;
		}
		if(i==strlen(chx)-1)
			printf("Case #%d: happy\n", ++t);
		else printf("Case #%d: unhappy\n", ++t);
	}
}