#include <iostream>
#include<stdio.h>
#include <cstring>
using namespace std;

int main() {
	// your code goes here
	char a[11];
	int t;
	bool flag=true;
	scanf("%d",&t);
	while(t--)
	{
		flag=true;
		scanf("%s",a);
	//	printf("%s\n",a);
		int i,j=strlen(a)-1;
		for(i=0;i<=j;i++,j--)
		{
			if(a[i]==a[j])
			 continue;
			else
			{
				flag=false;
			}
		}
		if(!flag==false)
		 printf("YES\n");
		else
		 printf("NO\n");
	}
	return 0;
}