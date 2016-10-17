#include <stdio.h>

int main(void) {
	// your code goes here
	int n,cy=0;
	int arr[100000],j,num,m,i,x,count=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&num);
		arr[0]=1;
		m=1;
		cy=0;
		count=0;
		for(j=1;j<=num;j++)
		{
			for(i=0;i<m;i++)
			{
				x=cy+arr[i]*j;
				arr[i]=x%10;
				cy=x/10;
			}
			while(cy!=0)
			{
			arr[m]=cy%10;
			cy=cy/10;
			m++;
			}
		}
	for(i=m-1;i>=0;i--)
	{
	  	printf("%d",arr[i]);
	}
	printf("\n");
 }
	
	return 0;
}
