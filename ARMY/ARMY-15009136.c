#include <stdio.h>

int main(void) {
	// your code here

	// your code goes here
	int totalNumber,no_God,no_Meca,in,largest=0,largest2=0;
	char space[1];
	scanf("%d",&totalNumber);
	while(totalNumber!=0)
	{
		gets(space);
		scanf("%d",&no_God);
		scanf("%d",&no_Meca);
		largest=0;
		largest2=0;
	    for(int i=0;i<no_God;i++)
	    {
	    	scanf("%d",&in);
	    	if(largest<in)
	    	 largest=in;
	    }
	     for(int i=0;i<no_Meca;i++)
	    {
	    	scanf("%d",&in);
	    	if(largest2<in)
	    	 largest2=in;
	    }
		if(largest>=largest2)
		 printf("Godzilla\n");
		else
		 printf("MechaGodzilla\n");
		 
		 totalNumber--;
	}
	return 0;

}