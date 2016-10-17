#include <stdio.h>
#include<math.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	long long int n,m,i;
		long k,visited[1000001],primes[32000];
		int flag=0;
		for(long i=2;i<=1000001;i++)
		{
			visited[i]=0;
		}
		long j=2,b=1;
		primes[0]=2;
		while(j<=100000)
		{
		
		 for(k=2;k<=100000/j;k++)
		 {
		 	visited[k*j]=1;
		 	//printf("%lld\n",k*j);
		 }
				j++;
				while(1)
				{
					if(j<=100000 && visited[j]==0)
					{
						primes[b++]=j;
						//printf("next j= %lld ",j);
						break;
					}
					else if(j<100000)
					j++;
					else
					break;
				}
		}
	while(t--)
	{
		scanf("%lld%lld",&n,&m);
		if(n%2==0 && n!=2)
		 n=n+1;
		for(i=n;i<=m;i++)
		{
			for(long j=0;primes[j]<=sqrt(i);j++ )
			{
				if(i%primes[j]==0)
				{
					flag=1;
					break;
				}
				//printf("%ld",primes[j]);
			}
			if(flag==0)
			{
				if(i!=1)
				printf("%lld\n",i);
				else if(n==1 && m==1)
				printf("0\n");
				//else if(n==2 && m==2)
				//printf("2\n");
			}
			else
			{
				flag=0;
			}
		}
			printf("\n");
	}
	return 0;
}

