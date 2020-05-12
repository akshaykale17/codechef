#include<cstdio>
#include<bits/stdc++.h>

using namespace std;
map<long long int,long long int> temp;
long long int calu(long long int n)
{
	if(temp.find(n)!=temp.end())
		return temp[n];
	else if (((n/2)+(n/3)+(n/4))>n)
	{
		long long int t;
		t = calu(n/2)+calu(n/3)+calu(n/4);
		temp[n]=t;
		return t;
	}
	else
	{
		return n;
	}
}



int main()
{
	long long int n;
	while(cin >> n)
		cout << calu(n) << endl;
}