#include <iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	vector<int> v;
	while(true)
	{
	int n;
	scanf("%d",&n);
	if(n==0)
	 break;
	else
	{
	 int t;
	 int flag=1;
	 v.clear();
	 while(n--)
	 {
	 	scanf("%d",&t);
	 	v.push_back(t);
	 	sort(v.begin(),v.end());
	 }
	   if(!(2*(1422-v[v.size()-1])<=200))
	   {
	 	 printf("IMPOSSIBLE\n");
	 	 continue;
	   }
	 	else
	 	{
	 	int i=0,sum=0;
	 	for(i=0;i<v.size();)
	 	{
	 		//printf("%d\n",v[i]);
	 		sum=sum+v[i];
	 		if(v[i+1]-v[i]<=200)
	 		 i++;
	 		else
	 		 break;
	 	}
	 	//printf("%d\n",i);
	 	if(i<v.size())
	 	 printf("IMPOSSIBLE\n");
	 	else
	 	{
	 	 printf("POSSIBLE\n");
	 	}
	 	}
	 	 
	   }
	}
	return 0;
}