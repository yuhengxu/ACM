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
		int b = str[i] - 'a';//��ǰ��ĸ�������е�λ��
		ans += mp[b][cnt];//mp[b][cnt]��a��z��ĳһ����cnt����Ӧ��ֵ
		cnt += a[b];//a[b]�Ǹ���ĸ����Ӧ��Ȩ�أ�cnt���м���ĸȨ�ض�Ӧ��
		mp[b][cnt]++;
	}
	printf("%lld\n", ans);
	return 0;
}