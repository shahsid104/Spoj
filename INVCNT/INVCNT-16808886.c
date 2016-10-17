#include <stdio.h>

long long int merge(long long int x[],long long int lb1,long long int ub1,long long int ub2,long long int count)
{
	long long int i=lb1,j=ub1+1,k=0;
	long long int temp[ub2+1];
	
//	printf("lb1=%lld j=%lld\n",i,j);
	while(i<=ub1 && j<=ub2)
	{
		if(x[i]<x[j])
		{
		 temp[k++]=x[i];
		// printf("if x[i]=%lld x[j]=%lld\n",x[i],x[j]);
		 i++;
		// count++;
		}
		else
		{
		 temp[k++]=x[j];
		// printf("else x[i]=%lld x[j]=%lld\n",x[i],x[j]);
		 j++;
		 count=count+(ub1-i+1);
		}
	}
	
	while(i<=ub1)
	{
	 temp[k++]=x[i];
	 //printf("x[i]=%lld\n",x[i]);
	 i++;
	// count++;
	}
	
	while(j<=ub2)
	{
	 temp[k++]=x[j];
	 //printf("x[j]=%lld\n",x[j]);
	 j++;
	// count++;
	}
	 
	j=0; 
	for(i=lb1;i<=ub2;i++)
	{
	 x[i]=temp[j++];
	// printf("%lld\n",x[i]);
	}
	//printf("count=%lld\n",count);
	return count;
}

long long int mergesort(long long int x[],long long int lb,long long int ub,long long int count )
{
	long long int mid;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
	//	printf("1 lb=%lld mid=%lld ub=%lld count=%lld\n",lb,mid,ub,count);
		count=mergesort(x,lb,mid,count);
	//	printf("2 lb=%lld mid=%lld ub=%lld count=%lld\n",lb,mid,ub,count);
		count=mergesort(x,mid+1,ub,count);
	//	printf("3 lb=%lld mid=%lld ub=%lld count=%lld\n",lb,mid,ub,count);
		count=merge(x,lb,mid,ub,count);
		return count;
	}
	return count;
}

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		//printf("n=%lld\n",n);
		long long int j=n;
		long long int x[n+1];
		long long int i=0;
		long long int count=0;
		while(j--)
		{
			scanf("%lld",&x[i++]);
		}
		count=mergesort(x,0,n-1,count);
	/*	for(i=0;i<n;i++)
		 printf("%lld ",x[i]);*/
		printf ("%lld\n",count);
	}
	return 0;
}
