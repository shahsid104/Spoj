#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	long long int t1,t2,sum;
	scanf("%lld%lld%lld",&t1,&t2,&sum);
	long long int num=(sum*2)/(t1+t2);
	long long int b=num-2;
	long long int d=(t2-t1)/(b-3);
	long long int first=t1-2*d;
	printf("%lld\n",num);
	for(int i=1;i<=num;i++)
	{
		printf("%lld ",first);
		first=first+d;
	}
	printf("\n");
	}
	return 0;
}
