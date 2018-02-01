#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define INF 0x3f3f3f3f
#define maxn 1111
int main()
{
	//int a;
	//char b, c[maxn];
	//while(~scanf("%d",&a)){}//while(scanf("%d",&a)!=EOF){}两个意思一样，scanf读到空格停，gets读到换行停
	//while (~scanf("%c", &b)){}//while(scanf"%c",&b)!=EOF){} 
	//while (~scanf("%s", c)) {}//同上
	//printf("a=%d,b=%c,c=%s", a, b, c);
	double a = 10, b = 5;
	printf("最小%f,最大%f", min(a, b), max(b, a));
	swap(a, b);
	//nth_element(a, a + k, a + n);
	sqrt(a);
	pow(a, 2);
	printf("%f,%f", sqrt(a), pow(a, 2));
}