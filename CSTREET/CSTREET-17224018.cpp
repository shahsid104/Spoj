#include <iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int mstSet[1001];
long long int key[1001];
long long int graph[1001][1001];
long long int visited=1,sum=0;
//long long int graph[1001][1001];

long long int shortestEdge(long long int graph[][1001],long long int v,long long int node)
{
	long long int newNode,min=10000000000;
	for(long long int i=1;i<=v;i++)
	{
		if(graph[node][i]!=0 && mstSet[i]==0)
		{
		  if(key[i]==-1 || key[i]>graph[node][i])	
			key[i]=graph[node][i];
		}
		 if(key[i]<min && key[i]!=0 && key[i]!=-1 && mstSet[i]==0)
		  {
			min=key[i];
			newNode=i;
		  }
	//	printf("%lld %lld %lld %d %lld %lld\n",node,i,graph[node][i],mstSet[i],min,key[i]);
	}
	sum+=min;
	return newNode;
}

long long int primeMST(long long int graph[][1001],long long int v,long long int node)
{
	long long int newNode=shortestEdge(graph,v,node);
	mstSet[newNode]=1;
	//sum+=graph[node][newNode];
	//printf("%lld %lld %lld %lld\n",node,newNode,graph[node][newNode],sum);
//	for(int i=1;i<=5;i++)
//	 printf("%lld ",key[i]);
//	printf("\n"); 
	visited++;
	if(visited==v)
	 return sum;
	primeMST(graph,v,newNode);
}
int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	 memset(key,-1,sizeof(key));
	 memset(graph,0,sizeof(graph));
	 long long int p,n,m,a,b,c,node=1;
	 scanf("%lld",&p);
	 scanf("%lld",&n);
	 scanf("%lld",&m);
	 memset(mstSet,0,sizeof(mstSet));
     key[1]=0;
	 mstSet[1]=1;
	 visited=1;
	 sum=0;
	 while(m--)
	 {
	 	scanf("%lld %lld %lld",&a,&b,&c);
	 	graph[a][b]=c;
	 	graph[b][a]=c;
	 }
    primeMST(graph,n,node);
    printf("%lld\n",sum*p);
	}
	return 0;
}