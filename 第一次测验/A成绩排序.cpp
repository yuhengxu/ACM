#include<cstdio>//标准输入输出
#include<cmath>//math
#include<iostream>//流输入输出
#include<algorithm>//算法
#include<stack>//栈
#include<functional>
#include<cstring>
#include<vector>
#include<queue>//队列
using namespace std;
typedef long long ll;
#define maxn 100000+10
#define INF 0x3f3f3f3f

struct info
{
	char id[100];
	char name[100];
	int score;
};
strucinfo data[maxn];
bool cmp_id(const struct info a, const struct info b)
{
	return strcmp(a.id, b.id)>0;
}
bool cmp_name(const struct info a, const struct info b)
{
	if (a.name == b.name)
		return strcmp(a.id, b.id)>0;
	else
		return strcmp(a.name, b.name)>0;
}
bool cmp_score(const struct info a, const struct info b)
{
	if (a.score == b.score)
		return strcmp(a.id, b.id)>0;
	else
		return a.score < b.score;
}

int main()
{
	int n, c, count = 0;
	while (~scanf("%d %d", &n, &c))
	{
		if (n == 0 && n == 0)break;
		count++;
		struct info data[maxn];
		for (int i = 0; i < n; i++)
			scanf("%s %s %d", data[i].id, data[i].name, &data[i].score);
		switch (c)
		{
		case 1:
			sort(data, data + n, cmp_id); break;
		case 2:
			sort(data, data + n, cmp_name); break;
		case 3:
			sort(data, data + n, cmp_score); break;
		}
		printf("Case %d:\n", count);
		for (int i = 0; i < n; i++)
			printf("%s %s %d\n", data[i].id, data[i].name, data[i].score);

	}
}