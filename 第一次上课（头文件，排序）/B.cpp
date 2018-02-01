#include<cstdio>//标准输入输出
#include<cmath>//math
#include<iostream>//流输入输出
#include<algorithm>//算法
#include<stack>//栈
#include<functional>
#include<cstring>//字符串函数
#include<string>//串的各种东西
#include<vector>
#include<queue>//队列
#include<map>//映射,关联容器，一对一
#include<set>
#include<ctime>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const double esp = 1e-6;
#define maxn 1000000+10
#define INF 0x3f3f3f3f
#define con 5
map<string, string>::iterator it;//迭代器 

ll a[maxn], b[maxn];
int main()
{
	int n;
	scanf("%d", &n);
	ll t, maxl = -1, minl = maxn, l, r;
	for (int i = 1; i <= n; i++)
	{
		scanf("%lld", &t);
		a[t]++;
		if (a[t] == 1)
			b[t] = i;
		if (a[t] > maxl)
		{
			maxl = a[t];
			minl = i - b[t];
			l = b[t];
			r = i;
		}
		else if (a[t] == maxl)
		{
			if (i - b[t] < minl)
			{
				l = b[t];
				r = i;
				minl = r - l;
			}
		}
	}
	printf("%lld %lld\n", l, r);
}