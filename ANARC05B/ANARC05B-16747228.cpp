#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int s1,s2,value1,value2;
	int seq1[20002];
	int seq2[20002];
	int sumSeq1[20002];
	int sumSeq2[20002];
	while(true)
	{
		cin>>s1;
		//cout<<s1<<endl;
		if(s1>0)
		{
			int sum=0;
			for(int i=1;i<=s1;i++)
			{
			 cin>>value1;
			// cout<<value1<<endl;
			 sum=sum+value1;
			 seq1[i]=value1;
			 sumSeq1[i]=sum;
			 //cout<<"sum= "<<sum<<"value 1= "<<value1<<endl;
			}
			sum=0;
			cin>>s2;
		//	cout<<s2<<"s2 read"<<endl;
			int currentSum1=0,currentSum2=0,prevSum1=0,prevSum2=0,finalSum=0,index=0,i;
			for(i=1;i<=s2;i++)
			{
			 cin>>value2;
			// cout<<value2<<endl;
			 sum=sum+value2;
			 seq2[i]=value2;
			 sumSeq2[i]=sum;
			 //cout<<"sum= "<<sum<<"value 2= "<<value2<<endl;
			 index=0;
			 for(int j=1;j<=s1;j++)
			 {
			 	if(seq1[j]>value2)
			 	 break;
			 	else if(seq1[j]==value2)
			 	{
			 	   index=j;
			 	   break;
			 	}
			 }
			 if(index!=0)
			 {
			 	currentSum1=sumSeq1[index]-prevSum1;
				prevSum1=sumSeq1[index];
				currentSum2=sumSeq2[i]-prevSum2;
				prevSum2=sumSeq2[i];
				
				//cout<<"currentSum1= "<<currentSum1<<"prevSum1= "<<prevSum1<<"currentSum2= "<<currentSum2<<"prevsum2= "<<prevSum2<<endl;
			 
			 if(currentSum2>=currentSum1)
			{
				finalSum+=currentSum2;
				//cout<<"Final Sum"<<finalSum<<endl;
			 //System.out.println("Final Sum= "+finalSum);
			}
			else
			{
			 finalSum+=currentSum1;
			 //cout<<"Final Sum"<<finalSum<<endl;
			//System.out.println("Final Sum= "+finalSum);
			}
		}
	}
			
			currentSum1=sumSeq1[s1]-prevSum1;
			//cout<<"CurrentSum1= "<<currentSum1<<endl;
			//prevSum1=sumSeq1[index];
			currentSum2=sumSeq2[s2]-prevSum2;
			//cout<<"CurrentSum2= "<<currentSum2<<endl;
			//prevSum2=sumSeq2[i];
			
		if(currentSum1>=currentSum2)
		   cout<<(finalSum+currentSum1)<<endl;
		else
	       cout<<(finalSum+currentSum2)<<endl;	
		}
		else
		exit(0);
	}
	return 0;
}