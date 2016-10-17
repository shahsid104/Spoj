#include <iostream>
#include<stdio.h>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int lcm(int a)
{
	switch(a)
	{
		case 1: return 1;
		case 2: return 2;
		case 3: return 3;
		case 4: return 2;
		case 5: return 5;
		case 6: return 2;
		case 7: return 7;
		case 8: return 2;
		case 9: return 3;
		case 10: return 2;
		case 11: return 11;
		case 12: return 2;
		case 13: return 13;
		case 14: return 2;
		case 15: return 3;
		case 16: return 2;
		case 17: return 17;
		case 18: return 2;
		case 19: return 19;
		case 20: return 2;
	}
}

int main() {
	// your code goes here
  while(true)
  {
	char a[21];
	scanf("%s",&a);
	if(a[0]=='*')
	 break;
	long long int prod=1,count=0;
	int flag=0;
	
	 for(int i=0;i<=strlen(a)-1;i++)
	 {
		if(a[i]=='Y')
		{
		//	printf("%lld %d %lld ",prod,i+1,prod%(i+1));
			if(prod%(i+1)!=0)
			{
				prod=prod*lcm((i+1));
			}
		}
	 }
	 
	 for(int i=0;i<=strlen(a);i++)
	{	
		if(a[i]=='N' && (prod%(i+1))==0)
		{
			printf("-1\n");
			flag=1;
			break;
		}
		
		if(a[i]=='Y' && (prod%(i+1))!=0)
		{
			printf("-1\n");
			flag=1;
			break;
		}
		
	}
	if(flag==0)
	 printf("%lld\n",prod);
  
  }  
	return 0;
}