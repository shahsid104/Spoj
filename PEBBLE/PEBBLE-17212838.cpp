#include <iostream>
#include<cstring>
#include<string>
using namespace std;

char bin[10000000];
int main() {
	// your code goes here
   long long int game=0;
	while(scanf("%s",bin)!=EOF)
	{
		long long int count=0;
		game++;
		for(long long int i=0;bin[i]!='\0';i++)
		{
			if(bin[i]=='1')
			{
				count++;
				long long int j=i;
				while(bin[j]!='\0')
				 {
				 	if(bin[j]=='1')
				 	 bin[j]='0';
				 	else
				 	 bin[j]='1';
				 	j++; 
				 }
			}
		}
		printf("Game #%lld: %lld\n",game,count);
	}
	return 0;
}