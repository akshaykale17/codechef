#include<cstdio>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int t,n,fin=0;
	std::vector<long long int> v(1000000);

	cin >> t;
	for(int i=0;i<t;i++)
	{
		cin >> n;
		fin = 0;
		for(long long int j=0;j<n;j++)
		{
			long long int s;
			cin >> s;
			v.push_back(s);
		}
		sort(v.begin(),v.end(),greater<int>());
		for(long long int j=0;j<v.size();j++)
		{
			if(v[j]-j>0)
				fin = (fin + (v[j]-j))%100000007;
			else
				break;
		}
		cout << fin << endl;
		v.clear();
	}
}