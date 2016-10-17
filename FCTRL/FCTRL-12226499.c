#include <stdio.h>

int main(void) {
	// your code goes here
	int n,x,count=0;
	scanf("%d",&n);
	while(n--)
	{
		count=0;
		scanf("%d",&x);
		if(x<5)
		{
		 printf("%d\n",0);
		 continue;
		}
		while(x>0)
		{
			x=x/5;
			count=count+x;
		}
		printf("%d\n",count);
	}
	return 0;
}
