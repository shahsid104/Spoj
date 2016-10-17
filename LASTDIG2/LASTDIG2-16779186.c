#include <stdio.h>
#include<math.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	unsigned long long int b;
	char a[10001];
	//double b;
	while(t--)
	{
		scanf("%s%llu",a,&b);
	//	printf("%llu",b);
		if(b==0 && a[0]!='0')
		 printf("1\n");
		else if(b==0 && a[0]=='0')
		 printf("0\n");
		else
		{
		int l=strlen(a);
		int a1=a[l-1]-'0';
	//	printf("%d\n",a1);
		unsigned long long int i=b/4;
	//	printf("%llu\n",i);
		unsigned long long int i2=i*4;
	//	printf("%llu\n",i2);
	//	printf("%llu",b);
		b=b-i2;
		if(b==0)
		 b=4;
	 //   printf("b=%llu \n",b);
		int p=pow(a1,b);
		printf("%d\n",p%10);
		}
	}
	return 0;
}
