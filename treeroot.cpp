#include<cstdio>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,n,te1,te2;
	cin >> t;
	while(t--)
	{
		int flag=0,final = 0;
		cin >> n;
		while(n--)
		{
			cin >> te1;
			cin >> te2;
			if(te2>=flag)
			{
				flag = te2;
				if(final < te1)
					final = te1;
			}	

		}
		cout << final << endl;
	}
}