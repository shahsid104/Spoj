#include <stdio.h>
#include<math.h>
int main(void) {
	int t1,t2;
	while(1)
	{
	scanf("%d%d",&t1,&t2);
	if(t1==-1)
	 break;
	if(t1==1 || t2==1)
	 printf("%d+%d=%d\n",t1,t2,(t1+t2));
	else
	 printf("%d+%d!=%d\n",t1,t2,(t1+t2));
	} 
	}

