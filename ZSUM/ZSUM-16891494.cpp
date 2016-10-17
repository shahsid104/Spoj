#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;

vector<int> bin;
void toBinary(long long int k)
{
	long long int r=1;
	bin.clear();
	while(k!=0)
	{
		int a=k%2;
		bin.push_back(a);
		//printf("%d ",a);
		k=k/2;
	}
	//printf("size=%d\n",bin.size());
}

int main() {
	// your code goes here
    long long int n,k,b1,b2,e,f,f1,f2;
	while(true)
	{
		scanf("%lld %lld",&n,&k);
		
		if(n==0 && k==0)
		 break;
		b1=n;
		b2=n-1;
		toBinary(k);
		e=0;
		f1=1;
		f2=1;
		
		while(e!=bin.size())
		{
			if(bin[e]==1)
			{
				f1=(f1*b1)%10000007;
				f2=(f2*b2)%10000007;
			}
			b2=(b2*b2)%10000007;
			b1=(b1*b1)%10000007;
			e++;
			//printf("b1=%lld b2=%lld e=%lld\n",b1,b2,e);
		}
		
		//printf("f1=%lld f2=%lld\n",f1,f2);
		f=f1+2*f2;
		
		b1=n;
		b2=n-1;
		f1=1;
		f2=1;
		toBinary(n-1);
		e=0;
		while(e!=bin.size())
		{
			if(bin[e]==1)
			{
				//f1=(f1*b1)%10000007;
				f2=(f2*b2)%10000007;
			}
			b2=(b2*b2)%10000007;
			//b1=(b1*b1)%10000007;
			e++;
			//printf("b1=%lld b2=%lld e=%lld\n",b1,b2,e);
		}
		//f1=(f1*b1)%10000007;
		//printf("f2=%lld\n",f2);
		f=f+2*f2;
		
		toBinary(n);
		e=0;
		
		while(e!=bin.size())
		{
			//int a=e%10;
			if(bin[e]==1)
			{
				f1=(f1*b1)%10000007;
				//f2=(f2*b2)%10000007;
			}
			//b2=(b2*b2)%10000007;
			b1=(b1*b1)%10000007;
			//printf("f1=%lld b1=%lld b2=%lld e=%lld bin=%d\n",f1,b1,b2,e,bin[e]);
			e++;
		}
		//f1=(b1*f1)%10000007
		f=(f+f1)%10000007;
		printf("%lld\n",f);
	}
	return 0;
}