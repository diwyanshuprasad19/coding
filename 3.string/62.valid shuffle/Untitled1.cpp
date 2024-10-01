#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2,res;
	cin>>s1;
	cin>>s2;
	cin>>res;
	int n1=s1.length();
	int n2=s2.length();
	int n3=res.length();
	int i=0,j=0,k=0;
	int f1=0;
	if(n1+n2!=n3)cout<<"No";
	else
	{
		while(k<n3)
		{
		if(i<n1 &&s1[i]==res[k])i++;
		else if(j<n2 && s2[j]==res[k])j++;
		else
		{
			f1=1;
			break;
		}
		k++;
	}
	}
	if(i<n1 || j<n2)cout<<"No";
	else
	cout<<"Yes";
	
	
	return 0;
}
