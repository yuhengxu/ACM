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
#define maxn 1000
#define INF 0x3f3f3f3f

deque<int>q;
int a[maxn], l[maxn], r[maxn];
int n, k, t, j, tipf, tipb;
void popf()//�ҵ���С��������ͷ
{
	if (t == k)
	{
		if (q.front() < tipf)
		{
			tipf = q.front();
			l[j++] = q.front();
		}
		else
		{
			l[j++] = q.front();
			tipf = INF;
		}
		q.pop_front();
		t--;
	}
}
void popb()//�ҵ���󣬵�����ͷ
{
	if (t == k)
	{
		if (q.front() > tipb)
		{
			tipb = q.front();
			r[j++] = q.front();
			q.pop_front();
		}
		else
		{
			r[j++] = tipb;
			tipb = -INF;
		}
		//q.pop_front();
		t--;
	}
}
void dull_queueL()//����С
{
	t = 1, j = 0, tipf = INF, tipb = -INF;
	q.clear();//���վ
	q.push_front(a[0]);
	for (int i = 1; i < n; i++)
	{
		if (q.back() < a[i])
		{
			q.push_back(a[i]);
			t++;
			popf();
		}
		else
		{
			q.pop_back();
			q.push_back(a[i]);
			t++;
			popf();
		}
	}
}
void dull_queueR()//�����
{
	t = 1, j = 0, tipf = INF, tipb = -INF;
	q.clear();
	q.push_front(a[0]);
	for (int i = 1; i < n; i++)
	{
		if (q.back() > a[i])
		{
			q.push_back(a[i]);
			t++;
			popb();
		}
		else
		{
			q.pop_back();
			q.push_back(a[i]);
			t++;
			popb();
		}
	}
}
int main()
{
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	dull_queueL();
	dull_queueR();
	printf("\n");
}