#include<bits/stdc++.h>
using namespace std;

int left(int n)
{
	int c=0;
	while(n>1)
	{
		n=n>>1;
		c++;
	}
	return c;
}

int count(int n)
{
	if(n<=1)
	return n;
	
	int m=left(n);
	int c1=m*(pow(2,m-1));
	
	int c2=n-pow(2,m)+1;  //for 16 already counted 10000 as 1 
	return c1+c2+count(n-pow(2,m));  //n-pow(2,m)+1 ot that as 1000 will already give 1 which is already addded.
}
int main()
{
	int n=17;
	int sum=count(n);
	cout<<sum;
	
	
	
	
	
	
	return 0;
}
