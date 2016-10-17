#include <iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>
using namespace std;

long long int ranks[100001];
long long int temp[100001];
int main() {
	// your code goes here
	int t;
	long long int n,r,test,badness;
	char c[1000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		test=n;
		memset(ranks,0,sizeof(ranks));
		memset(temp,0,sizeof(temp));
		long long int m=1;
		while(test--)
		{
			scanf("%s %lld",c,&r);
			if(ranks[r]==0)
			 ranks[r]=r;
			
			else
			 temp[m++]=r;
			 
			  
		}
		int k=1;
		badness=0;
		sort(temp,temp+m);
		for(int i=1;i<=n;i++)
		{
			if(ranks[i]==0)
			{
				for(int j=k;j<=n;j++)
				{
					if(temp[j]!=0)
					{
						 ranks[i]=temp[j];
						 badness=badness+abs((i-temp[j]));
						 temp[j]=0;
						 //printf("%d %d %d\n",i,j,badness);
						 k=j+1;
						 break;
					}
				}
			}
		}
		printf("%lld\n",badness);
	}
	return 0;
}