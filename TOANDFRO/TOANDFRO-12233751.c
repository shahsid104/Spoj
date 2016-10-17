#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	char code[20][20];
	char user[200];
	int col,i,j,k,row;
	while(1)
	{
		scanf("%d",&col);
		if(col==0)
		 break;
		else
		{
			scanf("%s",&user);
		//	printf("%s",user);
			j=0;
			row=strlen(user)/col;
		//	printf("%d",row);
			for(i=0;i<row;i++)
			{
				if(i%2==0)
				{
				 for(k=0;k<col;k++)
				 {
					code[i][k]=user[j++];
				//	printf("%c",code[i][k]);
				 }
				} 
				 else
				 {
				   for(k=col-1;k>=0;k--)
				  {
					code[i][k]=user[j++];
				//	printf("%c",code[i][k]);
				  }	
				 }
				
			}
		}
		for(i=0;i<col;i++)
	   {
		for(j=0;j<row;j++)
		{
			printf("%c",code[j][i]);
		}
   	   }
   	   printf("\n");
}
	
	return 0;
}
