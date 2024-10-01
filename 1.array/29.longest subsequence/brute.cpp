#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 	int arr[]={1,3,2,2};
 	int n=sizeof(arr)/sizeof(arr[0]);
 	sort(arr,arr+n);
 	int count=1;
 	int ans=0;
 	for(int i=1;i<n;i++)
 	{
 		if(arr[i]-arr[i-1]==1)
 		count++;
 		else if(arr[i]==arr[i-1])
 		continue;
 		else
 		{
 			count=1;
		 }
		 	ans=max(ans,count);
	 }
 	ans=max(ans,count);
 	cout<<ans;
 	
 	return 0;
 }
