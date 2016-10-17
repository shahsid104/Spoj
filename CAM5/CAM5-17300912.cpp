#include <iostream>
#include<stdio.h>
#include<vector>
#include<cstring>
using namespace std;

vector<vector<long long int>> g(100001);
int visited[100001];

void dfs(long long int node,long long int n)
{
	visited[node]=1;
	for(long long int i=0;i<g[node].size();i++)
	{
		if(visited[g[node][i]]==0)
		 dfs(g[node][i],n);
	}
}
void dfsStart(long long int n)
{
	long long int count=0;
	for(long long int i=0;i<=n;i++)
	{
		if(visited[i]==0)
		{
	     count++;
		 dfs(i,n);
		}
	}
	printf("%lld\n",count);
}
int main() {
	// your code goes here
	int t;
	long long int n,e,temp,a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		scanf("%lld",&e);
		g.clear();
		g.resize(100001);
		memset(visited,0,sizeof(visited));
		temp=e;
		while(temp--)
		{
			scanf("%lld %lld",&a,&b);
			g[a].push_back(b);
			g[b].push_back(a);
		}
		dfsStart(n-1);
	}
	return 0;
}