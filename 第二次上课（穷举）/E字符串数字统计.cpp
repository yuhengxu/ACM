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
#define maxn 100
#define INF 0x3f3f3f3f

int main()
{
	int n, temp = 0;
	scanf("%d", &n);
	getchar();
	char ch[maxn];
	while (n--)
	{
		temp = 0;
		gets_s(ch);
		int len = strlen(ch);
		for (int i = 0; i < len; i++)
			if (ch[i] >= '0'&&ch[i] <= '9')
				temp++;
		cout << temp << endl;
	}
}