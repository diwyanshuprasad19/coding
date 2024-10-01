#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,4,45,6,10,8};
	int len=sizeof(arr)/sizeof(arr[0]);
	int sum=22;
	int curr;
	for(int i=0;i<len-2;i++)
	{
		curr=sum-arr[i];
		unordered_set<int>s;
		for(int j=i+1;j<len;j++)
		{
			if(s.find(curr-arr[j])!=s.end())
			{
				cout<<arr[i]<<arr[j]<<curr-arr[j]<<endl;
			}
			s.insert(arr[j]);
		}
	}
	
	
	
	
	return 0;
}
