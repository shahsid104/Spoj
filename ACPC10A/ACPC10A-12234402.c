#include <stdio.h>

int main(void) {
	// your code goes here
	float x,y,z,a,b;
	while(1)
	{
		scanf("%f%f%f",&x,&y,&z);
	//	printf("%d%d%d",x,y,z);
		if(x==0&&y==0&&z==0)
		 break;
		else
		{
		if(y-x==z-y)
		 printf("AP %5.0f\n",(z+(z-y)));
	    a=z/y;
	    b=y/x;
		if(a==b)
		 printf("GP %5.0f\n",(z*(a)));
		}
		
	}
	return 0;
}
