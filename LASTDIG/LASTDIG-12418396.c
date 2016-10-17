#include <stdio.h>
int main(void) {
int t;
int base,b,e,last;
long long int exp;
scanf("%d",&t);
int digit[10][4]={{0,0,0,0},{1,1,1,1},{6,2,4,8},{1,3,9,7},{6,4,6,4},{5,5,5,5},{6,6,6,6},{1,7,9,3},{6,8,4,2},{1,9,1,9}};
	while(t--)
{
scanf("%d %lld",&base,&exp);
if(exp==0)
{
	printf("1\n");
	continue;
}
e=exp%4;
b=base%10;
printf("%d\n",digit[b][e]);
}
return 0;
}
