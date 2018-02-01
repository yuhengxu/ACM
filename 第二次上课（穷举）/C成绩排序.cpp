#include<iostream>

#include<cstdio>

#include<cstring>

#include<algorithm>

#include<cmath>

#include<cstdlib>

#define INF 0x3f3f3f3f

#define maxn 1000+10

#define maxn1 10+10

using namespace std;



int n, m, g, cnt;

int mpts[maxn1];



struct Stu

{

	char name[25];

	int pts;

}stu[maxn];



bool cmp(Stu a, Stu b)

{

	if (a.pts == b.pts)

	{

		if (strcmp(a.name, b.name) == 1) return false;

		return true;

	}

	return a.pts > b.pts;

}



int main()

{

	while (scanf("%d", &n) != EOF)

	{

		cnt = 0;

		if (n == 0) break;

		scanf("%d %d", &m, &g);

		for (int i = 1; i <= m; i++) scanf("%d", &mpts[i]);

		while (n--)

		{

			char name[25];

			int dm, sum;

			scanf("%s %d", name, &dm);

			sum = 0;

			while (dm--)

			{

				int ord;

				scanf("%d", &ord);

				sum += mpts[ord];

			}

			if (sum >= g)

			{

				strcpy(stu[cnt].name, name);

				stu[cnt++].pts = sum;

			}

		}

		if (cnt == 0) printf("0\n");

		else

		{

			printf("%d\n", cnt);

			sort(stu, stu + cnt, cmp);

			for (int i = 0; i < cnt; i++) printf("%s %d\n", stu[i].name, stu[i].pts);

		}

	}

	return 0;

}
