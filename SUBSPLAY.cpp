#include <iostream>
#include <iterator>
#include <map>
#include<vector>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	for (int i = 0; i < t; ++i)
	{
		int n;
		char s[100000];
		map<char, vector<int>> temp;
		scanf("%d",&n);
		scanf("%s",s);
		int k=0;
		for(int j=0;j<n;j++)
		{
			if(temp.find(s[j])==temp.end())
			{
				temp[s[j]].push_back(j);
				
			}
			else
			{

				for(auto ver = temp.find(s[j])->second.cbegin() ; ver != temp.find(s[j])->second.cend() ; ver++)
				{
					 
					int l=*ver ;
					
					int m=j;
					int flag=0;
					while(s[m]==s[l])
					{
						l++;
						m++;
						flag++;
					}
					if(flag>k)
					{
						k=flag;
					}
				}

				// int m=j;
				// int flag=0;
				// while(s[m]==s[l])
				// {
				// 	l++;
				// 	m++;
				// 	flag++;
				// }
				// if(flag>k)
				// {
				// 	k=flag;
				// }
				temp[s[j]].push_back(j);
			}
		}
		cout << k << endl;
	}
}