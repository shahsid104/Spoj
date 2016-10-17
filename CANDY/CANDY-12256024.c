#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	int n,temp,num[10000],sum=0,val,mov=0,j,i;
	while(1)
	{
		scanf("%d",&n);
		if(n==-1)
		 break;
		else
		{
		  temp=n;
		  i=0;
		  sum=0;
	      while(temp--)
	      {
	     	scanf("%d",&num[i]);
	     	sum=sum+num[i];
	     	i++;
	      }	
	     	if(sum%n!=0)
	     	{
	     	 printf("-1\n");
	     	}
	     	else
	     	{
	     		val=sum/n;
	     		mov=0;
	     		for(j=0;j<n;j++)
	     		{
	     			if(num[j]<val)
	     			{
	     			 mov=mov+(val-num[j]);
	     			} 
	     		}
	     		printf("%d\n",mov);
	     	}
	     }
	}
	return 0;
}
