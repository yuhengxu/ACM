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

char t[maxn], f[maxn], c[maxn], mark[maxn];
int main()
{
	int count = 0, flag = 0;
	scanf("%s", t);//正确的字符串
	scanf("%s", f);//错误的字符串
	memset(c, '\0', sizeof(c));//对对照表进行初始化
	for (int i = 0; i < strlen(t); i++)
	{
		if (c[t[i]] == '\0'&&c[f[i]] == '\0')//c对应位置空着且它对应字符的位置也空着，且两字符串字符不相同
		{
			c[t[i]] = f[i];
			c[f[i]] = t[i]; 
			mark[count++] = t[i];
			if (t[i] != f[i])
				flag++;
		}
		else if (c[t[i]] == f[i])//对应相同字符
			continue;
		else
		{
			printf("-1\n");
			return 0;
		}
	}
	if (count == 0)
		printf("0\n");
	else
	{
		printf("%d\n", flag);
		for (int i = 0; i < count; i++)
			if (mark[i] != c[mark[i]])
				printf("%c %c\n", mark[i], c[mark[i]]);
	}
}