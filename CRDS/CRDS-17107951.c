#include <stdio.h>

int main(void) {
	// your code goes here
 	int n;
 	long long int l,sum;
	scanf("%d",&n);
	//printf("%d",n);
	while(n--)
	{
		scanf("%lld",&l);
		//printf("%lld\n",l);
		sum=0;
		 sum=2+5*(l-1);
		long long int l1=2,val=0;
		 while(++l1<=l)
		 {
		 	val=val+3*(l1-2);
		 }
		 sum=sum+val;
		printf("%lld\n",sum%1000007);
	}
	return 0;
}
