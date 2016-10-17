#include <stdio.h>

int main(void) {
	// your code goes here
	long long int sum=0,tot=0,val,temp;
	char space;
	int t;
	scanf("%d",&t);
	scanf("%c",&space);
	scanf("%lld",&tot);
	while(t--)
	{
	 sum=0;	
	 temp=tot;
	 while(temp--)
	 {
	 scanf("%lld",&val);
	 sum+=val%tot;
	 }
	 if(sum%tot==0)
	  printf("YES\n");
	 else
	  printf("NO\n");
	 scanf("%c",&space);
	 scanf("%lld",&tot);
	}
	return 0;
}
