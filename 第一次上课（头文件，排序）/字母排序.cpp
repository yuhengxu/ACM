#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

#define N 200
int main()
{
	char c[N];
	gets_s(c);
	int len = strlen(c);
	sort(c, c + len);
	do{
		puts(c);
	} while (next_permutation(c, c + len));
}