#include<cstdio>//��׼�������
#include<cmath>//math
#include<iostream>//���������
#include<algorithm>//�㷨
#include<stack>//ջ
#include<functional>
#include<cstring>
#include<vector>
#include<queue>//����
#include<map>
#include<set>
#include<ctime>
using namespace std;
typedef long long ll;
#define maxn 5000
#define INF 0x3f3f3f3f
const double esp = 1e-6;
int main()
{
	int n, m, i, j;
	int w[4000], p[4000];
	while (scanf("%d%d", &n, &m) != EOF)
	{
		int c[20000] = { 0 };//����ֵ������Ƚ���
		for (i = 1; i <= n; i++)
			scanf("%d%d", &w[i], &p[i]);
		for (i = 1; i <= n; i++)//ѭ��n����Ʒ
			for (j = m; j >= w[i]; j--)//ѭ��������0��m�����ϱȽϼ��ϵ�i����Ʒ�벻���ϵ�i����Ʒ�ļ�ֵ��ֵ��ĸ�ֵ��c[j]
				c[j] = max(c[j], c[j - w[i]] + p[i]);
		printf("%d\n", c[m]);
	}
	return 0;
}