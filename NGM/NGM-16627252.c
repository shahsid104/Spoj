#include <stdio.h>

int main(void) {
	// your code goes here
	long number;
	scanf("%ld",&number);
	if(number%10==0)
	{
	 printf("%d",2);
	}
	else
	{
		printf("%d\n",1);
		printf("%d",number%10);
	}
	 
	return 0;
}
