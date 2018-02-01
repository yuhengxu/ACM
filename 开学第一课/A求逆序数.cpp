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
#define maxn 1000
#define INF 0x3f3f3f3f
#define con 5
map<string, string>::iterator it;//迭代器 

int tree[maxn], a[maxn], n;
int Lowbit(int t)//求某一点的管辖范围
{
	return t&(t ^ (t - 1));//等同于return t&(-t)
}
int Sum(int end)//求区间和
{
	int sum;
	while (end > 0)
	{
		sum += tree[end];
		end -= Lowbit(end);
	}
	return sum;
}
void add(int li, int val)//开始构建一个树状数组， 也可以修改数组
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