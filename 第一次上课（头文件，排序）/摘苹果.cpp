#include<cstdio>
#include<cmath>
#include<stdlib.h>
#define N 105
struct map
{
	int x;
	int num;
}road[N];
int cmp(const void *p,const void *q)
{
	int c = (*(struct map*)p).x - (*(struct map*)q).x;//根据结构体中x的值进行排序
	if (c>0) return 1;
	else return -1;
}
int main()
{
	int n, i, t = 0, mark = 0;//t用来记比0小的数的个数，mark用来记
	int flag[N];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d %d", &road[i].x, &road[i].num);
	qsort(road, n, sizeof(struct map), cmp);

	i = 0;
	while (road[i].x < 0)
	{
		t++;
		i++;
	}

	int temp = 0;//求和
	if (t > n / 2)
	{
		for (i = t; i < n; i++)
			temp += road[i].num;
		for (i = 0; i <= n - t; i++)
			temp += road[t - i - 1].num;
	}
	else
	{
		for (i = 0; i < t; i++)
			temp += road[i].num;
		for(i=t;i<2*t+1;i++)
			temp += road[i].num;
	}

	printf("%d\n", temp);
}