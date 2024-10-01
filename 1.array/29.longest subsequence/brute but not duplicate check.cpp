#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 	int arr[]={102,4,100,2,3,101,1};
 	int n=sizeof(arr)/sizeof(arr[0]);
 	sort(arr,arr+n);
 	int count=1;
 	int ans=0;
 	for(int i=1;i<n;i++)
 	{
 		if(arr[i]-arr[i-1]==1)
 		count++;
 		else
 		{
 			ans=max(ans,count);
 			count=1;
		 }
	 }
 	
 	cout<<ans;
 	
 	return 0;
 }
