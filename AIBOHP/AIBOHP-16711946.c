#include <stdio.h>
#include<string.h>
static int l[6100][6100];
int max(int a,int b)
{
	return (a>b)?a:b;
}
int main(void) {
	// your code goes here
	int t,i,j=0;
	scanf("%d",&t);
	while(t--)
	{
		char s[6100];
		char r[6100];
		scanf("%s",s);
		j=0;
		for(i=strlen(s)-1;i>=0;i--)
		 r[j++]=s[i];
		r[j]='\0';
		for(i=0;i<=strlen(s);i++)
		 l[i][0]=0;
		for(j=0;j<=strlen(r);j++) 
		 l[0][j]=0;
		for(i=0;i<strlen(s);i++)
		{
			for(j=0;j<strlen(r);j++)
			{
				if(s[i]==r[j])
				 l[i+1][j+1]=l[i][j]+1;
				else
				 l[i+1][j+1]=max(l[i+1][j],l[i][j+1]);
			}
		}
		
		printf("%d\n",strlen(s)-l[strlen(s)][strlen(s)]);
	/*	for(i=0;i<=strlen(s);i++)
		{
			for(j=0;j<=strlen(r);j++)
			{
				printf("%d ",l[i][j]);
			}
			printf("\n");
		}*/
	}
	return 0;
}
