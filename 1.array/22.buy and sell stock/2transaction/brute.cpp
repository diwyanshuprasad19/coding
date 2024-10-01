#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={3,5,0,1,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int dp[n];
	dp[n-1]=0;
	int max_far=arr[n-1];
	for(int i=n-2;i>=0;i--)
	{
		dp[i]=max(dp[i+1],max_far-arr[i]);
		max_far=max(max_far,arr[i]);
	}
	int min_far=arr[0];
	for(int i=1;i<n;i++)
	{
		dp[i]=max(dp[i-1],dp[i]+(arr[i]-min_far));
		min_far=min(min_far,arr[i]);
	}
	
	cout<<dp[n-1];
	
	return 0;
}
