#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int n,k,i,j;
	scanf("%d",&n);
	int temp=n;
	vector<int> v;
	int max=0,max2=0;
	while(temp--!=0)
	{
		scanf("%d",&i);
		v.push_back(i);
	}
	scanf("%d",&k);
	for(i=0,j=0;j<n;i++)
	{
		while(j-i<=k-1)
		{
			if(max<v[j])
			{
			 max2=max;	
			 max=v[j];
			}
			else if(max2<v[j])
			{
			 max2=v[j];
			 //printf("1.%d\n",max2);
			}
			j++; 
		}
		printf("%d ",max);
		if(v[i]==max)
		{
		 //printf("B4 max=%d\n",max);
		 max2=0;
		 for(int k=i+1;k<=j;k++)
		  {
		  	if(max2<v[k])
		  	 max2=v[k];
		  }
		  max=max2;
		// printf("After max=%d max2=%d\n",max,max2);
		}
		else if(v[i]==max2)
		 {
		 	max2=0;
		 }
		 }
	return 0;
}