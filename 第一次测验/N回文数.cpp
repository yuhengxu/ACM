#include<cstdio>//��׼�������
#include<iostream>//���������
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