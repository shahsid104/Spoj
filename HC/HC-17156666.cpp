#include <iostream>
#include<stdio.h>
#include<cstring>
#include<string>
#include<map>
using namespace std;

int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		char c[10];
		scanf("%d",&n);
		map<char,int> m1;
		m1['h']=0;
		m1['l']==0;
		while(n--)
		{
			scanf("%s",&c);
			m1[c[0]]=m1[c[0]]+1;
			if(m1[c[0]]==2 && c[0]=='l')
			{
				m1[c[0]]=0;
				m1['h']+=1;
				//printf("%d\n",m1['h']);
			}
			else if(m1[c[0]]==2 && c[0]=='h')
			 m1[c[0]]=1;
		}
		if(m1['l']==m1['h'])
		 printf("lxh\n");
		else if(m1['l']!=0)
		 printf("lxh\n");
		else
		 printf("hhb\n");
	}
}