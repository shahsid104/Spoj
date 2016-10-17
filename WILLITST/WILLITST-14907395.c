#include <stdio.h>

int main(void) {
	// your code here
		long long int n;
	scanf("%llu",&n);
	while(n>1)
	{
		if(n%2==0)
		 n=n/2;
		 else
		  {
		  	printf("NIE");
		  	break;
		  }
	}
	if(n==1)
	 printf("TAK");
	if(n<1)
	 printf("TAK");
	return 0;
}