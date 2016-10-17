#include <iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int gcd(long long int a,long long int b)
{
	if(b==0)
     return a;

return gcd(b,a%b);
}
int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,m;
		scanf("%lld",&n);
		m=floor(n/2);
		long long int ans;
		for(long long int i=m;m>0;m--)
		{
		   ans=-1;	
		   ans=gcd(n,m);
		  // printf("%lld %lld %lld\n",ans,n,m);
		   if(ans==1)
		   {
	        printf("%lld\n",m);
	        break;
		   }
		  else
		  continue;
		}
	}
	return 0;
}