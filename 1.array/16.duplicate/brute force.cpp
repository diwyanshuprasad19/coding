#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,3,4,2,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]==arr[i+1])
		{
			cout<<arr[i];
			break;
		}
	}
	
	
	
	return 0;
}
