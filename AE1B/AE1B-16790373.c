#include <stdio.h>

int main(void) {
	// your code goes here
	int n,k,s;
	scanf("%d%d%d",&n,&k,&s);
	int values[n],reqd;
	reqd=k*s;
	for(int i=0;i<n;i++)
	{
	 scanf("%d",&values[i]);
	 //printf("%d",values[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(values[j]<values[j+1])
			{
				int temp=values[j];
				values[j]=values[j+1];
				values[j+1]=temp;
			}
		}
	}
	int total=0,i;
	for(i=0;i<n;i++)
	{
	  if(total<reqd)
	  {
	  	total=total+values[i];
	  	//printf("value=%d total=%d\n",values[i],total);
	  }
	  else
	   break;
	}
	printf("%d",i);
	return 0;
}
