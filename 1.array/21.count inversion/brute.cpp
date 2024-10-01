#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,20,6,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int count=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			count++;
		}
	}
	
	cout<<count<<endl;
	
	
	return 0;
}
