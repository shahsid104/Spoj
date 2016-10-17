#include <stdio.h>
#include<math.h>
int main(void) {
	// your code goes here
	long n,t;
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%ld",&n);
		if(n==1)
		 printf("0\n");
		else if(n>500000)
		printf("1\n");
		else
		{
			int sum=1;
			for(int i=2;i<=sqrt(n);i++)
			{
				if(n%i==0)
				{
					sum+=i;
					if(n/i!=i)
					sum=sum+(n/i);
				}
			}
			printf("%d\n",sum);
		}
	}
	return 0;
}
