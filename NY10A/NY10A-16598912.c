#include<stdio.h>
#include<string.h>
int main()
{
	char* s[]={"HHH","HHT","HTH","HTT","THH","THT","TTH","TTT"};
	char* sub;
	char input[40],c;
	int hash[1000],n,occurence_no,hashValues[8];
	int h=0,i,j=0;
	for(j=0;j<8;j++)
	{
	 h=0;	
	 for(i=0;i<3;i++)
	{
		sub=s[j];
		h=h+(sub[i]+128*h)%50;
	}
	hash[h]=0;
	hashValues[j]=h;
	}
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&occurence_no);
	    scanf("%s",input);
	    for(i=0;i<strlen(input);i++)
	    {
	    	h=0;
	    	for(j=0;j<3;j++)
	    	{
	    		c=input[i+j];
	    		h=h+(c+128*h)%50;
	    	}
	    	hash[h]++;
	    }
	    printf("%d ",occurence_no);
	    for(j=7;j>=0;j--)
	    {
	    printf("%d ",hash[hashValues[j]]);
	    hash[hashValues[j]]=0;
	    }
	    printf("\n");
	}
	return 0;
}