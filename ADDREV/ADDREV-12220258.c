#include <stdio.h>

int main(void) {
	// your code goes here
	long sum,i,n,rev1,rev2,num1,num2,temp1,temp2,r;
	int boolean=0;
	scanf("%ld",&n);
	while(n!=0)
	{
		scanf("%ld%ld",&num1,&num2);
		temp1=num1;
		temp2=num2;
		rev1=0;
		rev2=0;
		while(temp1!=0)
		{
			r=temp1%10;
			if(r==0 && boolean==0)
			{
			 temp1/=10;
			 continue;
			}
			boolean=1;
			rev1=rev1*10+r;
			temp1=temp1/10;
		}
		boolean=0;
		while(temp2!=0)
		{
			r=temp2%10;
			if(r==0 && boolean==0)
			{
			 temp2/=10;
			 continue;
			}
			boolean=1;
			rev2=rev2*10+r;
			temp2=temp2/10;
		}
		sum=rev1+rev2;
		temp2=sum;
		boolean=0;
		rev2=0;
		while(temp2!=0)
		{
			r=temp2%10;
			if(r==0 && boolean==0)
			{
			 temp2/=10;
			 continue;
			}
			boolean=1;
			rev2=rev2*10+r;
			temp2=temp2/10;
		}
		printf("%ld\n",rev2);
		n--;
	}
	return 0;
}

