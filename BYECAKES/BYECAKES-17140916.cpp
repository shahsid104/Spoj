#include <iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	vector<int> v;
	vector<int> v2;
	while(true)
	{
		int x1;
		int a=0,flag=0;
		int count=0,index;
		double max=0;
		v.clear();
		v2.clear();
		while(a!=8)
		{
			scanf("%d",&x1);
		//	printf("%d ",x1);
			if(x1==-1)
			{
		 		flag=1;
		 		break;
			}
			if(a<4)
			{
				v.push_back(x1);
				if(x1==0)
				 count++;
			}
			else
			{
				if(max<ceil((double)v[a-4]/x1))
				{
			 		max=ceil((double)v[a-4]/x1);
			 		//printf("%d\n",max);
			 		index=a;
				}
			/*	else if(max<(v[a-4]+1)/x1)
				{
					max=(v[a-4]+1)/x1;
					printf("%d\n",max);
				}*/
				v2.push_back(x1);
			}
			a++;
			//printf("%d\n",count);
		}
	
	if(flag==1)
	 break;
	
	//printf("%d\n",max);
	if(count==4)
	{
		printf("0 0 0 0\n");
		continue;
	}
	int mul=max;
/*	if(max%v2[index]!=0)
	  mul=(max+1)/v2[index];
	else 
	  mul=max/v2[index];*/
	for(int i=0;i<v2.size();i++)
	{
		printf("%d ",(v2[i]*mul)-v[i]);
	}
	printf("\n");
	}
	return 0;
}