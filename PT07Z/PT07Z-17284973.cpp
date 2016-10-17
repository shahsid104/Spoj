#include <iostream>
#include<stdio.h>
#include<cstring>
#include<vector>
using namespace std;
struct node
{
	long long int b,l;
};

vector<vector<node>> g(50001);
long long int dist[50001]={0};
long long int visited[50001]={0};
long long int lnode=1;


long long int dfs(long long int node,long long int n,long long int max)
{
	for(long long int i=0;i<g[node].size();i++)
	{
	//	printf("i=%lld %lld\n",i,node);
		if(visited[g[node][i].b]==0)
		{
			visited[g[node][i].b]=1;
			dist[g[node][i].b]=dist[node]+g[node][i].l;
			if(dist[g[node][i].b]>max)
			{
				lnode=g[node][i].b;
				max=dist[g[node][i].b];
			}
			//printf("%lld %lld %lld %lld %lld %lld\n",node,g[node][i].b,g[node][i].l,dist[g[node][i].b],max,lnode);
			long long int value=dfs(g[node][i].b,n,max);
			if(value>max)
			 max=value;
		}
	}
	return max;
}
int main() {
	// your code goes here
	long long int n,a,b,l;
		scanf("%lld",&n);
		g.clear();
		g.resize(50001);
		memset(dist,0,sizeof(dist));
		memset(visited,0,sizeof(visited));
		lnode=1;
		for(long long int i=0;i<n-1;i++)
		{
			struct node v,v1;
			scanf("%lld %lld",&a,&b);
			
			v.b=b;
			v1.b=a;
			
			v.l=1;
			v1.l=1;
			
			g[a].push_back(v);
			g[b].push_back(v1);
			//printf("%lld %lld %lld\n",a,b,l);
		}
	
	visited[1]=1;
	dist[1]=0;
	dfs(1,n,0);
	memset(dist,0,sizeof(dist));
	memset(visited,0,sizeof(visited));
	visited[lnode]=1;
	dist[lnode]=0;
	dfs(lnode,n,0);
	printf("%lld\n",dist[lnode]);
	return 0;
}