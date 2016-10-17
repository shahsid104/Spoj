#include <stdio.h>

long long int array[50];
long long int divide(long long int n)
{
	long long int n1,n2,n3;
	n1=n/2;
	//printf(" %lld ",n1);
	if(n1/48>0)
	 n1=divide(n1);
	else
	 n1=array[n1];
	n2=n/3;
	//printf(" %lld ",n2);
	if(n2/48>0)
	 n2=divide(n2);
	else
	 n2=array[n2];
	n3=n/4; 
	//printf(" %lld ",n3);
	if(n3/48>0)
	 n3=divide(n3);
	else
	 n3=array[n3];
	//printf("%lld\n",n1+n2+n3);
	return n1+n2+n3;
}

int calc(long long int i)
{
	if(i>11)
	 array[i]=divide(i);
	else
	 array[i]=i;
}
int main(void) {
	// your code goes here
	long long int n,value,i;
	int count=0;
	for(i=0;i<=48;i++)
	{
			calc(i);
			//printf(" %lld ",array[i]);
	}
	
	while(1)
	{
	n=-1;
	scanf("%lld",&n);
	count++;
	if(n==-1||count>10)
	 break;
    if(n>11)
	value=divide(n);
	else
	value=array[n];
	printf("%lld\n",value);
	//printf("%lld %lld %lld %lld\n",n,n1,n2,n3);
	}
	return 0;
}
