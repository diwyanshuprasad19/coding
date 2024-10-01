#include<bits/stdc++.h>
using namespace std;

int countpalin(string s)
{
	int n=s.length();
	int flag=1;
	for(int i=0;i<n/2;i++)
	{
		if(s[i]!=s[n-1-i])
		{
			return 0;
		}
	}
	return n;
}


//time complexity=O(n^3)
int main()
{
	string s="forgeeksskeegfor";
	int n=s.length();
	string s1="";
	int count=0,max_palin=0;
	int start,end;
	for(int i=0;i<n;i++)
	{
		
		for(int j=i;j<n;j++)
		{
			s1=s1+s[j];
			count=countpalin(s1);
			if(count>=max_palin)
			{
				max_palin=count;
				start=i;
				end=j;
			}
		}
		s1="";
	}
	for(int k=start;k<=end;k++)
	cout<<s[k];
	cout<<endl;
	cout<<max_palin<<endl;
	return 0;
}
