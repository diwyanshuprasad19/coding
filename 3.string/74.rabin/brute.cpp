#include<bits/stdc++.h>
using namespace std;
//time complexity=O(n*m)
int main()
{
	string s="AABAACAADAABAABA";
	string search="AABA";
	int n=s.length();
	int m=search.length();
	int k=0;
	int flag=0;
	for(int i=0;i<=n-m;i++)
	{
	k=0;
		for(int j=i;j<i+m;j++)
		{
			if(s[j]==search[k])
			{
				k++;
			}
			if(k==m)
			{
				cout<<"found";
				flag=1;
			}
		}
		if(flag==1)
		break;
	}
	
	
	return 0;
}
