#include<cstdio>//��׼�������
#include<cmath>//math
#include<iostream>//���������
#include<algorithm>//�㷨
#include<stack>//ջ
#include<functional>
#include<cstring>//�ַ�������
#include<string>//���ĸ��ֶ���
#include<vector>
#include<queue>//����
#include<map>//ӳ��,����������һ��һ
#include<set>
#include<ctime>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const double esp = 1e-6;
#define maxn 1000
#define INF 0x3f3f3f3f
#define con 5
map<string, string>::iterator it;//������ 

int tree[maxn], a[maxn], n;
int Lowbit(int t)//��ĳһ��Ĺ�Ͻ��Χ
{
	return t&(t ^ (t - 1));//��ͬ��return t&(-t)
}
int Sum(int end)//�������
{
	int sum;
	while (end > 0)
	{
		sum += tree[end];
		end -= Lowbit(end);
	}
	return sum;
}
void add(int li, int val)//��ʼ����һ����״���飬 Ҳ�����޸�����
{
	if(li==0)tree[li] += val;
	else 
		while (li <= n)
		{
			tree[li] += val;
			li += Lowbit(li);
		}
}
int main()
{
	int k;
	while (scanf("%d", &n))
	{
		if (n == 0)break;

		int num = 0;
		memset(tree, 0, sizeof(tree));
		for (int i = 0; i <= n; i++)
		{
			scanf("%d", &k);
			add(i, 1);
			
		}
		printf("%d\n", num);
	}
	return 0;
}