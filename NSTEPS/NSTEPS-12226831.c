#include <stdio.h>

int main(void) {
	// your code goes here
	int n,x,y;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&x,&y);
		if(x==y || x==y+2)
		{
		 if(x%2==0 && y%2==0)
		 {
			printf("%d\n",(x+y));
		 }
	  	 else if(x%2!=0 && y%2!=0)
		 {
			printf("%d\n",(x+y-1));
		 }
		}
		else
		  printf("No Number\n");
	}
	return 0;
}
