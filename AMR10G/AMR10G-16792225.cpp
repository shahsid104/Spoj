#include <iostream>
using namespace std;
#include<stdio.h>
#include<algorithm>
int main() {
	// your code goes here
	
	// your code goes here
	int n,k,t;
	long values[20001];
	scanf("%d",&t);
	while(t--)
	{
	scanf("%d%d",&n,&k);
//	printf("n=%d k=%d\n",n,k);
	
	for(int i=0;i<n;i++)
	{
	 scanf("%ld",&values[i]);
	 //printf("%ld ",values[i]);
	}
	
	sort(values,values+n);
	//printf("\n");
/*	for(int i=0;i<n-1;i++)
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
	}*/
	
	long diff=1000000001;
	for(int i=0;i<n;i++)
	{
	 //printf("values[i]=%lld  values[i+k]=%lld",values[i],values[i+k]);	
	  if(i+k-1<n && abs(values[i]-values[i+k-1])<diff)
	  {
	  //printf("values[i]=%ld  values[i+k-1]=%ld\n",values[i],values[i+k-1]);
	   diff=abs(values[i]-values[i+k-1]);
	  }
	}
	printf("%ld\n",diff);
	}
	return 0;
}