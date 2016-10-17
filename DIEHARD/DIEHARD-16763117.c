#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int h,a;
		scanf("%d%d",&h,&a);
		h=h+3;
		a=a+2;
		int count=1;
		int a1,b,c,d;
		while(h-20>0 || a-10>0)
		{
			if(h-5>0 && a-10>0)
			{
			 h=h-5;
			 a=a-10;
			 count++;
		//	 printf("h=%d a=%d count=%d W\n",h,a,count);
			}
			else if(h-20>0)
			{
				h=h-20;
				a=a+5;
				count++;
		//	printf("h=%d a=%d count=%d F\n",h,a,count);
			}
			else
			break;
			 h=h+3;
			 a=a+2;
			 count++;
		//	printf("h=%d a=%d count=%d A\n",h,a,count);
		}
		printf("%d\n",count);
	}
	return 0;
}
