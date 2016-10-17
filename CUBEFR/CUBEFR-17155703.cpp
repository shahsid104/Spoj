#include <iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int a[1000001];
int main() {
	// your code goes here
	memset(a,0,sizeof(a));
	int count=1;
	for(int i=2;i<=100;i++)
	{
		a[i*i*i]=1;
		for(int j=i*i*i;j<1000001;j=j+(i*i*i))
		 a[j]=1;
	}
	
	for(int i=1;i<=1000000;i++)
	{
		if(a[i]!=1)
		 a[i]=count++;
	}
	int t;
	scanf("%d",&t);
	int Case=1;
	while(t--)
	{
	  int n;
	  scanf("%d",&n);
	  if(n==1 || a[n]!=1 )
	   printf("Case %d: %d\n",Case++,a[n]);
	  else
	   printf("Case %d: Not Cube Free\n",Case++);
	}
	return 0;
}