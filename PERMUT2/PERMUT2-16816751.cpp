#include <iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int main() {
	// your code goes here
	int n,temp;
	int per[100002],inv[100002];
	bool flag;
	while(true)
	{
	scanf("%d",&n);	
	flag=true;
	temp=n;
	if(n==0)
	 break;
	else
	{
		int i=1;
		while(temp--)
		{
			scanf("%d",&per[i]);
			inv[per[i]]=i;
			i++;
		}
		for(i=1;i<=n;i++)
		{
		 if(per[i]!=inv[i])
		 {
		 	printf("not ambiguous\n");
		 	flag=false;
		 	break;
		 }
		}
		if(flag==true)
		 printf("ambiguous\n");
		 
	}
	}
	 
	return 0;
}