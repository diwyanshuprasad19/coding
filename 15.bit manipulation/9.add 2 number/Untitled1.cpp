#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x=6,y=2;
	unsigned carry;
	while(y!=0)
	{
		carry=x&y;
		x=x^y;
		y=carry<<1;
		
	}
	cout<<x;
	
	
	
	return 0;
}
