#include<cstdio>
#include<cmath>
#include<stdlib.h>
#define N 200000
#define INF 0x3f3f3f3f
struct map
{
	char dire;//����
	int x;//����
}line[N];

int main()
{
	int n, i;
	char c[N];
	scanf("%d", &n);
	scanf("%s", c);
	for (i = 0; i < n; i++)
		line[i].dire = c[i];
	for (i = 0; i < n; i++)
		scanf("%d", &line[i].x);

	int flag = 0, temp = INF;
	for (i = 0; i < n - 1; i++)
	{
		if (line[i].dire == 'R'&&line[i + 1].dire == 'L')//�ж�����������
		{
			flag = 1;
			if (temp > (line[i + 1].x - line[i].x) / 2)//Ѱ����С��
				temp = (line[i + 1].x - line[i].x) / 2;
			if (temp == 1)break;
		}
	}
	if (flag == 0)
	{
		printf("-1\n");
		return 0;
	}
	else printf("%d\n", temp);
}