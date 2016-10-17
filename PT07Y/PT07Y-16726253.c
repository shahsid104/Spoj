#include <stdio.h>

int adj[10004][10004],visited[10004];
int main(void) {
	// your code goes here
	int n,e,i,j,n1,n2,k;
	scanf("%d%d",&n,&e);
	if(e==n-1)
	{
	 for(i=0;i<e;i++)
	  {
		scanf("%d%d",&n1,&n2);
		adj[n1][n2]=1;
		adj[n2][n1]=1;
	  }
	 
	  void dfs(int i,int prev)
	 {
	 	//printf("Function Entered i=%d prev=%d\n",i,prev);
	 	int j;
	 	visited[i]=1;
	 	for(j=1;j<=n;j++)
	 	{
	 		if(adj[i][j]==1)
	 		{
	 		//	printf("adj=%d i=%d j=%d\n",adj[i][j],i,j);
	 		  	if(visited[j]!=1)
	 		  	{
	 		  	 //printf("j=%d prev=%d",j,i);	
	 		  	 dfs(j,i);
	 		  	}
	 		  	else if(visited[j]==1 && j!=prev)
	 		  	{
	 		  	 printf("NO");
	 		  	 exit(0);
	 		  	}
	 		  	 
	 		}
	 	}
	 }
	  
	  dfs(i,0);
	  for(i=1;i<=n;i++)
	  {
	  	if(visited[i]==0)
	  	{
	  	 printf("NO");
	  	 exit(0);
	  	}
	  	 
	  }
	  printf("YES");
	
	}
	else
	{
	  printf("NO");
	}
	return 0;
}
