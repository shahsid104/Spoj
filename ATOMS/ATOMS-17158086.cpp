#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
		float n,k,m;
		long long int count;
		scanf("%f %f %f",&n,&k,&m);
		count=0;
		while(true)
		{
			if(n*k<=m)
			{
		 	  count++;
		 	  n=n*k;
			}
			else
			{
		 		printf("%lld\n",count);
		 		break;
			}
		}
	}
	return 0;
}