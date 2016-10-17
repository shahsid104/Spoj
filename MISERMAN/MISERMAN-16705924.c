#include <stdio.h>

int min(int a,int b,int c)
{
	if(a<=b && a<=c)
	 return a;
	else if(b<=a && b<=c)
	 return b;
	else
	 return c;
}
int main(void) {
	// your code goes here
	int i,j,n,m,array[100][100],value;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=1;j<=m;j++)
		 {
		 	scanf("%d",&array[i][j]);
		 }
	}
	
	for(i=0;i<n;i++)
	{
	  array[i][0]=101;
	  array[i][m+1]=101;
	}
	
	for(i=1;i<n;i++)
	{
		for(j=1;j<=m;j++)
		{
			array[i][j]+=min(array[i-1][j],array[i-1][j-1],array[i-1][j+1]);
			//printf("%d",array[i][j]);
		}
	}
	value=array[n-1][1];
		for(j=2;j<=m;j++)
		{
			if(value>array[n-1][j])
			 value=array[n-1][j];
		}
		printf("%d",value);
	return 0;
}
