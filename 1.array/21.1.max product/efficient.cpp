#include<bits/stdc++.h>
using namespace std;
int main()

{
	int arr[]={6, -3, -10, 0, 2};
	int n=sizeof(arr)/sizeof(arr[0]);
	int ans=arr[0];
	int mi=ans;
	int ma=ans;
	for(int i=1;i<n;i++)
	{
		if(arr[i]<0)
		swap(ma,mi);
		ma=max(arr[i],ma*arr[i]);
		mi=min(arr[i],mi*arr[i]);
		ans=max(ans,ma);
	}
	cout<<ans;
	return 0;
}
