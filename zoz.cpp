#include<iostream>
using namespace std;
int main()
{
  long long t,n,k,a[10000];
  cin >> t;
  while(t--)
  {
    long long final=0;
    cin >> n >> k;
    for(long long i=0;i<n;i++)
    {
      cin >> a[i];
    }
    for(long long i=0;i<n;i++)
    {
      long long temp=0;
      for(long long j=0;j<n;j++)
      {
        if(i!=j)
        {
          temp=temp+a[j];
        }
      }
      if((a[i]+k)>temp)
        final=final+1;
    }
    cout << final;
  }
}
