#include"cstdio"//标准输入输出
#include"set"
#include"map"
using namespace std;

set<int>st;
map<int, int>mp;
int main()
{
	int n;
	while (scanf("%d", &n) == 1 && n)
	{
		st.clear();
		mp.clear();
		mp[1000000000] = 1;
		st.insert(1000000000);
		int id, fig;
		while (n--)
		{
			scanf("%d %d", &id, &fig);
			printf("%d ", id);
			set<int>::iterator it = st.lower_bound(fig);//找到平衡二叉树中第一个大于等于fig的数，返回它的位置
			if (it == st.end())//没有找到
			{
				it--;
				printf("%d\n", mp[*it]);
			}
			else
			{
				int t = *it;
				if (it != st.begin())
				{
					it--;
					if (fig - *it <= t - fig)
						printf("%d\n", mp[*it]);
					else printf("%d\n", mp[t]);
				}
				else printf("%d\n", mp[*it]);
			}
			mp[fig] = id;
			st.insert(fig);
		}
	}
}