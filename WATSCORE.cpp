#include<iostream>
#include<iterator>
#include<map>
using namespace std;

int main()
{
	int t,n;
	scanf("%d",&t);
	for (int i = 0; i < t; ++i)
	{
		scanf("%d",&n);
		int final=0;
		map<int, int> temp;
		for (int j = 0; j < n; ++j)
		{
			int k,l;
			scanf("%d %d",&k,&l);
			
			if(temp.find(k)!=temp.end())
			{
				if(temp[k]<l)
					temp[k]=l;
			}
			else
			{
				temp.insert(pair<int,int>(k,l));	
			}
		}
		for (int q = 1; q <= 8; ++q)
		{
			if(temp.find(q)!=temp.end())
			{
				final=final+temp.at(q);
			}
		}
		cout << final << endl;
	}
}