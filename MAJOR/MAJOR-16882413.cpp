#include <iostream>
#include<stdio.h>
#include<map>
#include<math.h>
#include<string.h>
#include<string>
using namespace std;

int main() {
	// your code goes here
	long long int t,n,n1;
	scanf("%lld",&t);
	map<long long int,long long int> m;
	while(t--)
	{
		scanf("%lld",&n);
		//printf("n=%lld\n",n);
		m.clear();
		int temp=ceil(n/2),flag=0;
		while(n--)
		{
			scanf("%lld",&n1);
			//printf("%lld\n",n1);
			m[n1]=m[n1]+1;
			if(m[n1]>temp)
			{
			 printf("YES %lld\n",n1);
			 flag=1;
			 char a[1000000];
			 scanf("%[^\n]\n",a);
			 break;
			}
		}
		if(flag==0)
		 printf("NO\n");
	
	}
	return 0;
}