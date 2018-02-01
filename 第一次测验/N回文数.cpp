#include<cstdio>//标准输入输出
#include<iostream>//流输入输出
#include<cstring>

using namespace std;
#define maxn 1000000+10
char s[maxn];
int main()
{
	scanf("%s", s);
	cout << s;
	for (int i = strlen(s) - 1; i >= 0; i--)
		printf("%c", s[i]);
	printf("\n");
}