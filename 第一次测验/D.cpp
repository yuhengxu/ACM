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

char t[maxn], f[maxn], c[maxn], mark[maxn];
int main()
{
	int count = 0, flag = 0;
	scanf("%s", t);//��ȷ���ַ���
	scanf("%s", f);//������ַ���
	memset(c, '\0', sizeof(c));//�Զ��ձ���г�ʼ��
	for (int i = 0; i < strlen(t); i++)
	{
		if (c[t[i]] == '\0'&&c[f[i]] == '\0')//c��Ӧλ�ÿ���������Ӧ�ַ���λ��Ҳ���ţ������ַ����ַ�����ͬ
		{
			c[t[i]] = f[i];
			c[f[i]] = t[i]; 
			mark[count++] = t[i];
			if (t[i] != f[i])
				flag++;
		}
		else if (c[t[i]] == f[i])//��Ӧ��ͬ�ַ�
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