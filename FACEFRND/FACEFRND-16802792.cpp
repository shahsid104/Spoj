#include <iostream>
#include<algorithm>
#include<stdio.h>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int n,m,id1;
	vector<int> id;
	vector<int> n_id,final;
	
	scanf("%d",&n);
	//printf("n=%d",n);
	while(n--)
	{
		scanf("%d",&id1);
		//printf("id1=%d\n",id1);
		n_id.push_back(id1);
		scanf("%d",&m);
		while(m--)
		{
			scanf("%d",&id1);
			if(!(find(id.begin(),id.end(),id1)!=id.end()))
			 id.push_back(id1);
			//printf("m=%d\n",id1);
		}
	}
	bool flag=true;
	int count=0;
	for(int i=0;i<id.size();i++)
    {
    	flag=true;
		for(int j=0;j<n_id.size();j++)
		{
			if(n_id[j]==id[i])
			 {
			 	flag=false;
			 	break;
			 }
		}
		if(flag==true)
		 count++;
    }
	printf("%d",count);
	return 0;
}