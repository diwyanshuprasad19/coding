#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={2,2};
		int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
	int pos,repeat;
	for(int i=1;i<=n;i++)
	{
		if(arr[i-1]!=i)
		{
			pos=i;
			repeat=arr[i];
			break;
		}
	}
	cout<<pos<<" "<<repeat;
	return 0;
}
//time complexity->O(nlogn)
