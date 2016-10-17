#include<stdio.h>
#include<algorithm>
#include<queue>
#include<vector>
#include<cstring>

#define max 2005
using namespace std;
int color[max];
int v[max][max];
int main() {
	// your code goes here
	int n1,n2,t;
	long interact;
	int n;
	//bool visited[2001];
	
	//color.reserve(2001);
	//vector<vector<int> > v(2001,vector<int>(2001));
	deque<int> node;
	scanf("%d",&t);
	int temp=t;
	while(t--)
	{
		
		scanf("%d%ld",&n,&interact);
		
		for(int i=0;i<max;i++)
		 {
		 	for(int j=0;j<max;j++)
		 	  v[i][j]=0;
		 }
		memset(color,-1,sizeof(color));
		for(int i=0;i<interact;i++)
		{
			scanf("%d%d",&n1,&n2);
			v[n1][n2]=1;
			v[n2][n1]=1;
		}
		
		int flag=-1;
		for(int i=1;i<=n;i++)
		{
			 if(color[i]==-1)
			 {
				node.push_back(i);
				color[i]=1;
				int k;
			    while(!node.empty())
			    {
			    	k=node.front();
					node.pop_front();
					//visited[k]=true;
				//printf("%d\n",visited[k]);
				for(int j=1;j<=n;j++)
				{
					if(v[k][j]==1)
					{
				//printf("k=%d j=%d\n",k,j);
						if(color[j]==-1)
						{
							color[j]=1-color[k];
							node.push_back(j);
						}
							else if(color[j]==color[k])
							{
						//printf("j=%d already in queue\n",j);
					    		printf("Scenario #%d:\n",temp-t);
								printf("Suspicious bugs found!\n");
								node.clear();
								flag=0;
			 					break;
							}
						}
						if(flag==0)
						 break;
					}
				}
			 }
			    }
		
		if(flag==0)
		 continue;
		else
		{
			printf("Scenario #%d:\n",temp-t);
			printf("No suspicious bugs found!\n");
		}
		node.clear();
	}
	return 0;
}