#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int n,m;
	vector<int> h(300000);
	scanf("%d %d",&n,&m);
	int i=0,j=0,max_sum=0,max=0;
	while(n-->=0)
	{
		scanf("%d",&h[j]);
	//	printf("j=%d %d\n",j,h[j]);
		if(max_sum+h[j]<m)
		 {
		  max_sum=max_sum+h[j];
	//	  printf("1.%d\n",max_sum);
		  j++;
		  if(max<max_sum)
		   max=max_sum;
		 }
		 else if(max_sum+h[j]==m)
		 { 
		   max_sum=max_sum+h[j];	
		  //printf("%d",max_sum);
		  break;
		 }
		 else
		 {
		 	max_sum=max_sum+h[j];
		 	j++;
		 	while(max_sum>m)
		 	{
		 		max_sum=max_sum-h[i];
		 		if(max_sum==m)
		 		 break;
	//	 		printf("2.%d i=%d %d\n",max_sum,i,h[i]);
		 		i++;
		 	}
		 	if(max_sum>max)
		 	 max=max_sum;
		 	if(max_sum==m)
		 	 break;
		 }
	}
	if(max>max_sum)
	printf("%d",max);
	else
	printf("%d",max_sum);
	return 0;
}