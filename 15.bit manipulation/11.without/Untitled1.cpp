#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num=10;
	int result=0,time=num;
	if(num<0)
	num=-num;
	while(time>0)
	{
		int poss=0,curr=1;
		while((curr<<1)<=time)
		{
			poss++;
			curr=curr<<1;
			
		}
		result=result+(num<<poss);
		time=time-curr;
	}
	cout<<result;
	
	
	
	
	
	return 0;
}
