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
const double esp = 1e-6;
#define maxn 100000+10
#define INF 0x3f3f3f3f

map<ll, int>mp[26];
char str[maxn];
int a[26];
int main()
{
	for (int i = 0; i < 26; i++)
		scanf("%d", &a[i]);
	scanf("%s", str);
	ll ans = 0, cnt = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		int b = str[i] - 'a';//当前字母在数组中的位置
		ans += mp[b][cnt];//mp[b][cnt]是a—z的某一个的cnt所对应的值
		cnt += a[b];//a[b]是该字母所对应的权重，cnt算中间字母权重对应和
		mp[b][cnt]++;
	}
	printf("%lld\n", ans);
	return 0;
}