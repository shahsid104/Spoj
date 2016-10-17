#include <stdio.h>

int max(int a,int b,int c)
{
	if(a>=b && a>=c)
	 return a;
	else if(b>=a && b>=c)
	 return b;
	else
	 return c;
}
int main(void) {
	// your code goes here
	int a[100][100],i,j,t,h,w,args;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&h,&w);
		for(i=0;i<h;i++)
		{
			for(j=1;j<=w;j++)
			{
				scanf("%d",&a[i][j]);
			}
			
		}
		for(i=0;i<h;i++)
		 a[i][0]=0;
		for(i=0;i<h;i++)
		 a[i][w+1]=0;
		 
	//	printf("%d",h-2); 
		
		for(i=h-2;i>=0;i--)
		{
			for(j=1;j<=w;j++)
			{
				a[i][j]=a[i][j]+max(a[i+1][j-1],a[i+1][j],a[i+1][j+1]);
			}
		}
		
		args=a[0][1];
		for(i=0;i<=w;i++)
		{
			if(args<a[0][i])
			 args=a[0][i];
		}
	printf("%d\n",args);
	}
	
	return 0;
}
