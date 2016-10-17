#include <iostream>
#include<cstring>
#include<string>
#include<stdio.h>
using namespace std;

int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main() {
	// your code goes here
	int a,t,d,m;
	string b;
	scanf("%d",&t);
	while(t--)
	{
	cin >> a;
	cin >> b;
	if(a==0)
	{
	 cout << b << endl;
	 continue;
	}
	m=b[0]-'0';
	d=m%a;
	for(int i=1;i<b.size();i++)
	{
		if(i!=1)
		{
		d=m%a;
		m=b[i]-'0';
		m=10*d+m;
		}
		else
		{
			m=b[i]-'0';
			m=10*d+m;
		}
	}
	int g=gcd(a,m);
	cout << g << endl;
	}
	return 0;
}