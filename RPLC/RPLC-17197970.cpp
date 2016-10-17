#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
	// your code goes here
	int t,scenario=1;
	scanf("%d",&t);
	//printf("%d\n",t);
	while(t--)
	{
		long long int n,sum=0,count=0,start=0;
		scanf("%lld",&n);
		//printf("%d\n",n);
		while(n--)
		{
			long long int e;
			cin >> e;
			//printf("%lld ",e);
			if(e<0)
			{
				count++;
				if(sum+e<0)
				{
				if(count%2!=0)
				{
				 start=start+abs(sum+e);
				 }
				else
				 start=start+abs(e)+sum;
				 sum=0;
				}
				else
				{
				 sum+=e;
				 count=0;
				}
				
			}
			else
			{
				count=0;
				sum+=e;
			}
			
		}
		printf("Scenario #%d: %lld\n",scenario++,start+1);
	}
			
	return 0;
}