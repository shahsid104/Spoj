#include <stdio.h>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<map>
using namespace std;
long long int merge(int x[],int lb1,int ub1,int ub2,long long int count)
{
	 int i=lb1,j=ub1+1,k=0;
	 int temp[ub2+1];
	
//	printf("lb1=%lld j=%lld\n",i,j);
	while(i<=ub1 && j<=ub2)
	{
		if(x[i]<x[j])
		{
		 temp[k++]=x[i];
		// printf("if x[i]=%lld x[j]=%lld\n",x[i],x[j]);
		 i++;
		// count++;
		}
		else
		{
		 temp[k++]=x[j];
		// printf("else x[i]=%lld x[j]=%lld\n",x[i],x[j]);
		 j++;
		 count=count+(ub1-i+1);
		}
	}
	
	while(i<=ub1)
	{
	 temp[k++]=x[i];
	 //printf("x[i]=%lld\n",x[i]);
	 i++;
	// count++;
	}
	
	while(j<=ub2)
	{
	 temp[k++]=x[j];
	 //printf("x[j]=%lld\n",x[j]);
	 j++;
	// count++;
	}
	 
	j=0; 
	for(i=lb1;i<=ub2;i++)
	{
	 x[i]=temp[j++];
	// printf("%lld\n",x[i]);
	}
	//printf("count=%lld\n",count);
	return count;
}

long long int mergesort(int x[],int lb,int ub,int count )
{
	int mid;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
	//	printf("1 lb=%lld mid=%lld ub=%lld count=%lld\n",lb,mid,ub,count);
		count=mergesort(x,lb,mid,count);
	//	printf("2 lb=%lld mid=%lld ub=%lld count=%lld\n",lb,mid,ub,count);
		count=mergesort(x,mid+1,ub,count);
	//	printf("3 lb=%lld mid=%lld ub=%lld count=%lld\n",lb,mid,ub,count);
		count=merge(x,lb,mid,ub,count);
		return count;
	}
	return count;
}

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%ld",&n);
		//string y,norm;
		map<string,int> y;
		map<string,int>:: iterator it;
		char c[300000];
		//norm[300000];
	//	string:: size_type pos;
		vector<string> yoda;
		//normal;
	//	vector<string>:: iterator it;
		int x[n+1];
	//	cin.ignore(256, '\n');
	//	getline(cin,y);
	//	cout << y << endl;
		for(int i=0;i<n;i++)
		{
			scanf("%s",c);	
			y[c]=i;
		}
	//	getline(cin,norm);
	//	gets(norm);
	//	cout << norm << endl;
	/*	for(int i=0;i<n;i++)
		{
			cin>>norm;	
			normal.push_back(norm);
		}*/
		
		for(int i=0;i<n;i++)
		{
			
			scanf("%s",c);
			//printf("%d",strlen(c));
			it=y.find(c);
			//pos=y.find(c);
			//int index=ceil((pos+strlen(c)-1)/(n*1.0));
			x[it->second]=i;
			//printf("pos=%d index=%d\n",pos,index);
		//	cout << yoda[i] << endl;
		}
		//printf("n=%lld\n",n);
		//long long int j=n;
		
	//	long long int i=0;
		long long int count=0;
		count=mergesort(x,0,n-1,count);
	/*	for(i=0;i<n;i++)
		 printf("%lld ",x[i]);*/
		printf ("%lld\n",count);
	}
	return 0;
}
