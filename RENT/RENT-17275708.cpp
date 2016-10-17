#include <iostream>
#include<stdio.h>
#include<algorithm>
#include<map>
#include<cstring>
using namespace std;

long long int final=0;
long long int table[20000]={0};
struct job
{
	long long int start,finish,profit;
};

bool jobComparator(job s1,job s2)
{
	return(s1.finish <=s2.finish);
}

int findNextNonConflictJob(job arr[],int k)
{
	long long int i;
	for(i=k;i>0;i--)
	{
//		printf("%lld %lld %lld\n",arr[i].start,arr[i].finish,arr[i].profit);
		if(arr[i-1].finish<=arr[k].start)
		{
//			printf("Returning Value  %d %lld %lld %lld\n",k,i-1,arr[i-1].finish,arr[i-1].start);
			return (i-1);
		}
	}
	
	 return -1;
	
}
void findMaxProfit(job arr[],int n,int size)
{
	if(n==size)
	{
	 //printf("%lld\n",final);
	 return;
	}
	int nonConflict=findNextNonConflictJob(arr,n);
//	printf("%d %d\n",nonConflict,n);
	if(nonConflict==-1 && n!=0)
	{
	  if(arr[n].profit>table[n-1])	
	   table[n]=arr[n].profit;
	  
	  else
	   table[n]=table[n-1];
//	  printf("1 %lld\n",table[n]);
	}
	
	else if(nonConflict==-1 && n==0)
	{
	  table[n]=arr[n].profit;
//	   printf("2 %lld\n",table[n]);
	}
	 
	else
	{
		if((table[nonConflict]+arr[n].profit)>table[n-1])
		{
		 table[n]=table[nonConflict]+arr[n].profit;
	//	  printf("3.1 %lld\n",table[n]);
		}
		
		else
		{
		 table[n]=table[n-1];
	//	  printf("3.2 %lld\n",table[n]);
		}
	}
	n=n+1;
	findMaxProfit(arr,n,size);
}
int main() {
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int count=0,temp;
		job arr[n];
		temp=n;
		
		while(temp--)
		{
		 long long int st,f,p;
		 scanf("%lld %lld %lld",&st,&f,&p);
		 arr[count].start=st;
		 arr[count].finish=st+f;
		 arr[count].profit=p;
		 count++;
		}
		sort(arr,arr+n,jobComparator);
	//	for(int i=0;i<n;i++)
	//	 printf("%lld %lld %lld\n",arr[i].start,arr[i].finish,arr[i].profit);
		final=0;
		memset(table,0,sizeof(table));
		findMaxProfit(arr,0,n);
		printf("%lld\n",table[n-1]);
	//	for(int i=0;i<n;i++)
	//	 printf("%lld\n",table[i]);
	}
	return 0;
}