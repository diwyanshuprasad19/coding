#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	string s="abcd";
	int n=s.length();
	int q=pow(2,n);
	int k;
	int j=0;
	for(int i=0;i<q;i++)
	{
		k=1;
		while(j<n)
		{
			if(i&k)
			{
				cout<<s[j];
			}
			k=k<<1;
			j++;
		}
		j=0;
		k=1;
		cout<<endl;
	}
	
	
	return 0;
}
