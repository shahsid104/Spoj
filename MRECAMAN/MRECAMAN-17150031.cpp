#include <iostream>
#include<cstring>
#include<stdio.h>
#include<vector>
using namespace std;

int visited[3012500];
long long int v[3012500];
int main() {
	// your code goes here
	memset(visited,0,sizeof visited);
	
	//long long int m=500001;
	for(long long int m=0;m<=500001;m++)
	{
		int val;
		if(m==0)
		{
		 visited[m]=1;
		 v[0]=0;
		}
		else
		{
		  	val=v[m-1]-m;
		  	if(val>0 && visited[val]==0)
		  	{
		  	 v[m]=val;
		  	 visited[val]=1;
		  	}
		  	else
		  	{
		     val=v[m-1]+m; 	
		  	 v[m]=val;
		  	 visited[val]=1;
		  	}
		}
	}
	long long int t;
	while(true)
	{
		scanf("%lld",&t);
		if(t==-1)
		 break;
		else
		 printf("%lld\n",v[t]);
	}
	return 0;
}