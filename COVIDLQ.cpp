#include<cstdio>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,n,a,flag=0,temp=0;
	vector<int> v(100);

	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		temp = 0;
		flag=0;
		int f=0;
		cin >> n;
		for(int j=0;j<n;j++)
		{
			cin >> v[j];

		}
		for(int j=0;j<n;j++)
		{
			if((v[j]==1)&&(flag==0))
			{
				
				flag=1;
				continue;

			}
			else if(flag==1)
			{
				if(v[j]==0)
				{
					temp++;
				}
				else 
				{
					if(temp<5)
					{
						f=1;
					}
					temp = 0;
				}
			}
		}
		if(f==1)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
		
	
	}

}