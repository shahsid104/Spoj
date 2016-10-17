#include <iostream>
#include<stdio.h>
#include<vector>
#include<map>
using namespace std;

int main() {
	// your code goes here
	int n,k,inp;
	map<int,int> num;
	vector<int> v;
	scanf("%d %d",&n,&k);
	int temp=n;
	while(temp--)
	{
		scanf("%d",&inp);
		num[inp]=inp;
		v.push_back(inp);
		
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(num.count(v[i]+k))
		 count++;
	}
	printf("%d",count);
	return 0;
}