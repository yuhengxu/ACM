#include<cstdio>//��׼�������
#include<cmath>//math
#include<iostream>//���������
#include<algorithm>//�㷨
#include<stack>//ջ
#include<functional>
#include<cstring>
#include<string>//���ĸ��ֶ���
#include<vector>
#include<queue>//����
#include<map>
#include<set>
#include<ctime>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const double esp = 1e-6;
#define maxn 100
#define INF 0x3f3f3f3f
#define con 5
//map<int ,int>mp;
map<string, string>mp;
map<string, string>::iterator it;//������ 
char ch[maxn], ch1[maxn], trans[maxn];
int main()
{
	mp.clear();
	while (1)
	{
		fgets(ch, 30, stdin);
		if (ch[0] == '\n')break;
		int len = strlen(ch);
		for (int i = 0; i < len; i++)
		{
			if (ch[i] == ' ')
			{
				ch1[i] = '\0';
				strcpy(trans, &ch[i + 1]);
				trans[len - i - 2] = '\0';
				break;
			}
			ch1[i] = ch[i];
		}
		mp.insert(make_pair<string, string>(trans, ch1));
	}
	while (~scanf("%s", ch))
	{
		if (mp.find(ch) == mp.end())printf("eh\n");
		else
		{
			it = mp.find(ch);
			string ans;
			ans = (it->second);
			cout << ans << endl;
		}
	}
	return 0;
}