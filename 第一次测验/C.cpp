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
#define maxn 2000+10
#define INF 0x3f3f3f3f

int i,n;
char s[maxn];
int main()
{
	scanf("%d", &n);
	scanf("%s", &s);
	for (i = n - 2; i >= 0; i -= 2)
		printf("%c", s[i]);
	for(i=1-n&1;i<n;i+=2)printf("%c", s[i]);
	printf("\n");
}