#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,4,3,2,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int dp[n];
	for(int i=0;i<n;i++)
	dp[i]=INT_MAX;
	dp[0]=0;
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(dp[j]!=INT_MAX && arr[j]+j>=i)
			{
				if(dp[j]+1<dp[i])
				dp[i]=dp[j]+1;
			}
		}
	}
	if(dp[n-1]!=INT_MAX)cout<<dp[n-1];
	else cout<<-1;
	
	
	return 0;
}


time complexity: O(n^2)
space complexity:O(n)
