#include <iostream>
#include<stdio.h>
#include <map>
#include <vector>
#include <typeinfo>
using namespace std;

int main() {
	int t,n;
	long entry,exit;
	vector<long> a;
	vector<long>:: iterator vi;
	map<long,long> m;
	scanf("%d",&t);
	while(t--)
	{
		a.clear();
		m.clear();
		scanf("%d",&n);
		long max=0;
		while(n--)
		{
			scanf("%ld%ld",&entry,&exit);
			for(long i=entry;i<exit;i++)
			{
			 a.push_back(i);
			 //printf("%ld\n",i);
			}
		}
		for(vi=a.begin();vi!=a.end();vi++)
		{
			m[*vi]++;
			 //printf("%ld\n",);
			 if (m[*vi] > max)
			 {
    			max = m[*vi];
			 }
		}
			printf("%ld\n",max); 
	}
	
	}