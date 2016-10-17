#include <iostream>
#include<stdio.h>
#include<vector>
#include<cstring>
using namespace std;

void nonDecDigit(int sr,int n)
{
	long long int a[10][n+1],count=0;
	memset(a,0,sizeof(a)); 
	for(int i=0;i<=9;i++)
	 a[i][1]=1;
	 
	for(int digit=0;digit<=9;digit++)
	{
		for(int len=2;len<=n;len++)
		{
			for(int x=0;x<=digit;x++)
			{
			  a[x][len]+=a[x][len-1];
			  //printf("%d %d %d\n",a[x][len-1],x,len);
			}
		}
	}
	
	for(int i=0;i<=9;i++)
	{
	 //printf("%d ",a[i][n]);
	 count+=a[i][n];
	}
	 
	printf("%d %lld\n",sr,count); 
}
	
int main() {
	// your code goes here
	int t;
	
	scanf("%d",&t);
	while(t--)
	{
	    int sr,n;
		scanf("%d %d",&sr,&n);
		nonDecDigit(sr,n);
	}
	
	return 0;
}