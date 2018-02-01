#include<cstdio>
#include<cmath>
#include<stdlib.h>
#define N 10000
int soldx[N], soldy[N];
int cmp(const void *a, const void *b)
{
	if (*(int *)a - *(int *)b == 0)
		return 0;
	if (*(int *)a - *(int *)b<0)
		return -1;
	else
		return 1;
}
int main()
{
	int i, n, k = 0, step = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d %d", &soldx[i], &soldy[i]);
	qsort(soldy, n, sizeof(soldy[0]), cmp);
	qsort(soldx, n, sizeof(soldx[0]), cmp);
	for (i = 0; i < n; i++)
		step += abs(soldy[i] - soldy[n/2]);
	for (i = 0; i < n; i++)
		soldx[i] = soldx[i] - i;
	qsort(soldx, n, sizeof(soldx[0]), cmp);
	for (i = 0; i < n; i++)
		step += abs(soldx[i]- soldx[n/2]);
	printf("%d\n", step);
}