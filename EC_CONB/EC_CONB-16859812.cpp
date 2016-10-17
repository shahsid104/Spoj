#include <iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

vector <int> bin(100);

int toBinary(long n)
{
	int r=0,i=0;
	while(n!=0)
	{
		r=n%2;
		bin[i++]=r;
	//	bin=bin*10+r;
	//	printf("r=%d\n",r);
		n/=2;
	//	printf(" r=%ld n=%ld \n",r,n);
		//i*=10;
	}
	//printf("bin=%d\n",bin);
	return i-1;
}

long toDecimal(int i)
{
	int dec=0,j=0;
	while(i>=0)
	{
		dec=dec+bin[i--]*pow(2,j++);
	}
	return dec;
}
int main() {
	// your code goes here
	long n,n1;
	scanf("%ld",&n);
	while(n--)
	{
		scanf("%ld",&n1);
		if(n1%2==0)
		{
		 int a=toBinary(n1);
		 long b=toDecimal(a);
		 printf("%ld\n",b);
		}
		else
		 printf("%ld\n",n1);
	}
	return 0;
}