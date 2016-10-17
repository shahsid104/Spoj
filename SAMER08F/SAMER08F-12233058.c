#include <stdio.h>

int main(void) {
	// your code goes here
	int i,x;
	long sum=0;
	while(1)
	{
		scanf("%d",&x);
		sum=0;
		if(x!=0)
		{
			for(i=x;i>0;i--)
			{
				sum=sum+i*i;
			}
			printf("%ld\n",sum);
		}
		else 
		 break;
	}
	return 0;
}
