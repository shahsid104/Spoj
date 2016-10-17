#include<iostream>
#include<map>
 
using namespace std;
 
int main()
{
 int t;
 long n;
 char r;
 string str;
 map<string,int> mapp;
 scanf("%d%c",&t,&r);
 while(t--)
 {
        scanf("%ld%c",&n,&r);
         
        while(n--)
        {
         getline(cin,str);
         if(mapp.count(str)==0)
          mapp[str]=1;
         else
          mapp[str]++;                            
        }
       map<string,int>::iterator it;
       for(it=mapp.begin();it!=mapp.end();it++)
       cout<<(*it).first<<" "<<(*it).second<<"\n"; 
 
       mapp.erase(mapp.begin(),mapp.end());
       putchar('\n');
 }    
  return 0;  
}