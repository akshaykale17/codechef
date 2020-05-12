#include<cstdio>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	int s,a1,a2,a3;
	while(t--)
	{
		
		cin >> s >> a1 >> a2 >> a3;
		if((a1+a2+a3)<=s)
			cout << "1\n";
		else if(((a1+a2)<=s)||((a2+a3)<=s))
			cout << "2\n";
		else 
			cout << "3\n";	
	}
	
}