#include<cstdio>//标准输入输出
#include<cmath>//math
#include<iostream>//流输入输出
#include<algorithm>//算法
#include<stack>//栈
#include<functional>
#include<cstring>
#include<vector>
#include<queue>//队列
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
void popf()//找到最小，弹出队头
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
void popb()//找到最大，弹出队头
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
void dull_queueL()//找最小
{
	t = 1, j = 0, tipf = INF, tipb = -INF;
	q.clear();//清空站
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
void dull_queueR()//找最大
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