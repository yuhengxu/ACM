#include"cstdio"//��׼�������
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
			set<int>::iterator it = st.lower_bound(fig);//�ҵ�ƽ��������е�һ�����ڵ���fig��������������λ��
			if (it == st.end())//û���ҵ�
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