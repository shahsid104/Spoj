#include <iostream>
#include<stdio.h>
#include<cstring>
#include<cmath>
using namespace std;

char a[1000000];

long long int gcd(long long int a,long long int b)
{
   if (b)
        return gcd (b, a % b);
    else
        return a;
    }

int main() {
	// your code goes here
	int t;
	
	scanf("%d",&t);
	while(t--)
	{
		long long int d=0;
		int num=1,flag=0,j,k;
		scanf("%s",a);
		int i=0;
	//	printf("int= %d",'0'-a[strlen(a)-3]);
		for(i=strlen(a)-1;a[i]!='.' && i>=0;i--)
		{
		 	 j=a[i]-'0';
		 	 d=d+j*(pow(10.0,num));
		 	 num++;
		}
		//printf("%c",a[i]);
		if(a[i]=='.')
		{
		 long long int den=pow(10.0,num);
	//	 printf("%lld %lld\n",d,den);
	     long long int ans=gcd(d,den);
	  //   printf("%lld",ans);
	     if(ans==0)
	      printf("%lld\n",den);
	     else
	      printf("%lld\n",(den/ans));
		}
		else
		printf("1\n");
	    
	printf("\n");
	}
	return 0;
}