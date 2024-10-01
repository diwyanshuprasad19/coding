#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int> m;
	int arr[]={12, 23, 34, 12, 12, 23, 12, 45};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		m[arr[i]]++;
	}
	map<int,int>::iterator itr;
	for(itr=m.begin();itr!=m.end();itr++)
	{
		if(itr->second%2!=0)
		cout<<itr->first<<endl;
	}
	
	
	return 0;
}
