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
#define maxn 2005
#define INF 0x3f3f3f3f

int main()
{
	int n, t;
	int x[maxn];
	while (scanf("%d", &n) != EOF)//�������
	{
		scanf("%d",  &t);
		int i, mark;
		for (i = 0; i < n; i++)
			scanf("%d", &x[i]);
		sort(x, x + n);
		for (i = 0; i < n; i++)
			if (x[i] >= 0)
			{
				mark = i;
				break;
			}

		int max = 0, j;

		if (x[0] >= 0 || x[n - 1] <= 0)//ֻ��һ������
		{
			if (x[0] >= 0)//ֻ�д��ڵ���0�ķ���
			{
				if (t >= x[n - 1])
					max = n;
				else
				{
					for (j = 0; j < n; j++)
						if (x[j] >= t)
							max = j;
				}
			}
			else//ֻ��С����ķ���
			{
				if (t >= abs(x[0]))
					max = n;
				else
				{
					for (j = 0; j < n; j++)
						if (abs(x[j]) <= t)
						{
							max = n - j;
							break;
						}
				}
			}
		}
		else
		{
			for (i = 0; i < n; i++)
			{
				if (abs(x[i]) > t)//������
					continue;
				else if (abs(x[i]) > t / 2 && abs(x[i]) < t)//���ɷ���
				{
					if (abs(mark - i) > max)
						max = mark - i;
				}
				else//���Է���
				{
					for (j = 0; j < n; j++)
						if (t - 2 * abs(x[i]) <= x[j])
							if (abs(j - i) > max)
								max = abs(j - i);
				}
			}
		}
		printf("%d\n", max);
	}
}