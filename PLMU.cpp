
#include<iostream>

using namespace std;
#define MAX 500;

int multiply(int x, int res[], int res_size); 
  
 
void facto(int n,int res[MAX]) 
{ 
     
  
     
    res[0] = 1; 
    int res_size = 1; 
  
    for (int x=2; x<=n; x++) 
        res_size = multiply(x, res, res_size); 
  
    cout << "Factorial of given number is \n"; 
    for (int i=res_size-1; i>=0; i--) 
        cout << res[i]; 
} 
  
int multiply(int x, int res[], int res_size) 
{ 
    int carry = 0;   
  
    for (int i=0; i<res_size; i++) 
    { 
        int prod = res[i] * x + carry; 
  
        res[i] = prod % 10;   
  
        carry  = prod/10;     
    } 
  
    while (carry) 
    { 
        res[res_size] = carry%10; 
        carry = carry/10; 
        res_size++; 
    } 
    return res_size; 
} 







int main()
{

	int t;
	scanf("%d",&t);
	for (int i = 0; i < t; ++i)
	{
		long long int a[40000];
		int n;
		int flag=0,flag1=0;
		scanf("%d",&n);
		for (int j = 0; j < n; ++j)
		{
			scanf("%d",&a[j]);
			if(a[j]==0)
			{
	
				flag1++;	
			}
			if(a[j]==2)
			{
				flag++;	
			}
			
		}
		long long int c=0,b=0;
		if(flag1>=2)
			c=facto(flag1)/(facto(flag1-2)*2);
		if(flag>=2) 
			b=facto(flag)/(facto(flag-2)*2);
			
		cout << c+b  << endl;	
	
	}
}

