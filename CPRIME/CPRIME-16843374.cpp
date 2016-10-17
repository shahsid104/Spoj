#include <iostream>
#include<math.h>
#include<cmath>
#include<stdio.h>
using namespace std;

int main() {
	// your code goes here
	bool * isPrime = new bool [100000000]();
	long j=0,count=0;
	int *prime=new int[100000000]();
	for(long i=2;i<=sqrt(100000000);i++)
	{
		if(isPrime[i]==false)
		{
			prime[i]=++count;
		//	printf("i=%d count=%d\n",i,count);
			for(long k=i*i;k<=100000000;k=k+i)
			 isPrime[k]=true;
		}
		else
		prime[i]=count;
	}
	
	for(long i=sqrt(100000000)+1;i<=100000000;i++)
	{
		if(isPrime[i]==false)
		{
			count++;
			prime[i]=count;
		}
		else
		prime[i]=count;
	}
	
//	printf("%ld",prime[100000000]);
	
	long x=0,pi=0;
	while(true)
	{
	scanf("%ld",&x);
	if(x==0)
	 break;
	pi=prime[x];
	double a=(abs(pi-(x/log(x)))*100)/pi;
	printf("%0.1lf\n",a);
	}
	
	return 0;
}