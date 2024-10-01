#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="0100110101";
	int count0=0,count1=0,sub=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='0')
		count0++;
		else if(s[i]=='1')
		count1++;
		 if(count1==count0)
		{
			sub++;
			count0=0;
			count1=0;
		}
		
		
	}
	if(count1!=count0)
	sub=-1;
	cout<<sub++;
	
	
	return 0;
}
