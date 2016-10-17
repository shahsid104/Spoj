#include <stdio.h>
#include<string.h>
int min(int a,int b,int c);
int t[2101][2101];
int main(void) {
    // your code goes here
    int no_testCases,i,j;
    char string1[2001],string2[2001];
    scanf("%d",&no_testCases);
    while(no_testCases--)
    {
        scanf("%s",string1);
        scanf("%s",string2);
        for(i=1;i<=strlen(string2);i++)
         t[0][i]=i;
        for(j=1;j<=strlen(string1);j++)
         t[j][0]=j; 
        t[0][0]=0; 
        for(i=1;i<=strlen(string2);i++)
        {
            for(j=1;j<=strlen(string1);j++)
            {
                if(string2[i-1]==string1[j-1])
                {
                 t[i][j]=t[i-1][j-1];
                }
                else
                {
                 t[i][j]=min(t[i-1][j-1],t[i-1][j],t[i][j-1])+1;
                }
            }
        }
        printf("%d\n",t[strlen(string2)][strlen(string1)]);
    }
    return 0;
}

int min(int a,int b,int c)
{
    if(a<b)
    {
        if(a<c)
         return a;
    }
    if(b<c)
    {
     return b;
    }
    else
    {
    return c;
    }
}