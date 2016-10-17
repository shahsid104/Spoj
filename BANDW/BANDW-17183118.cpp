#include <iostream>
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

int main() {
	// your code goes here
	char c1[501];
	char c2[501];
	while(true)
	{
		scanf("%s %s",c1,c2);
	//	printf("%s %s",c1,c2);
		if(c1[0]=='*')
		 break;
		else
		{
			int consec=0,move=0;
			for(int i=0;c1[i]!='\0';i++)
			{
				if(c1[i]!=c2[i])
				{
					consec++;
				}
				else
				{
					if(consec!=0)
					{
						consec=0;
						move++;
					}
				}
			}
			if(consec!=0)
			 move+=1;
			printf("%d\n",move);
		}
		 
	}
	return 0;
}