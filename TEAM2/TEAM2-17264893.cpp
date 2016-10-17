#include <iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	long long int a1,a2,a3,a4,count=1;;
	while(scanf("%lld %lld %lld %lld",&a1,&a2,&a3,&a4)!=EOF)
	{
		long long int arr[4]={a1,a2,a3,a4};
		sort(arr,arr+4);
		printf("Case %lld: %lld\n",count++,arr[3]+arr[2]);
	}
	return 0;
}