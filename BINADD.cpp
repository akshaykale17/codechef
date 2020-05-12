#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int cal(char A[100])
{
	long int final=0,i=strlen(A)-1,j=0;

	while(i>=0)
	{
		if(A[i]=='1')
		{
			final += pow(2,j);
		}
		j++;
		i--;
	}
	return final;
}	
int main()
{
	long int t;
	scanf("%d",&t);
	for (long int i = 0; i < t; ++i)
	{
		long int flag=0;
		
		char C[1000],D[1000];
		scanf("%s",C);
		scanf("%s",D);
		long int a=cal(C),b=cal(D),u,v;
		while(b>0)
		{
			u=a^b;
			v=a&b;
			a=u;
			b=v*2;
			flag++;
		}	
		cout << flag << endl;
	}
}






