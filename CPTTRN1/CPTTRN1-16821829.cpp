#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
	// your code goes here
	int t,r,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&r,&c);
		for(int i=1;i<=r;i++)
		{
			for(int j=1;j<=c;j++)
			{
				if(i%2==0)
				{
					if(j%2!=0)
					 printf(".");
					else
					 printf("*");
				}
				else
				{
					if(j%2!=0)
					 printf("*");
					else
					 printf(".");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}