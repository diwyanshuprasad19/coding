#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=9;
	int count=0;
	for(int i=1;i<=a;i++)
	{
		if(i*i<a)
		count++;
	}
	cout<<count;
	
	
	return 0;
}
//time complexity->O(n)
