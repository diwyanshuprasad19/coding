#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={3,5,0,1,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int buy1,buy2,profit1,profit2;
	buy1=buy2=INT_MAX;
	profit1=profit2=0;
	for(int i=0;i<n;i++)
	{
		buy1=min(buy1,arr[i]);
		profit1=max(profit1,arr[i]-buy1);
		buy2=min(buy2,arr[i]-profit1);
		profit2=max(profit2,arr[i]-buy2);
		
	}
	cout<<profit2;
	return 0;
}
