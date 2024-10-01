//use sort method->O(nlogn)
//use count method->O(n)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int end = n-1,start=0,mid=0,pivot=1;
	while(mid<=end)
	{
		if(arr[mid]<pivot)
		{
			swap(arr[start],arr[mid]);
			start++,mid++;
		}
		else if(arr[mid]<pivot)
		{
			swap(arr[mid],arr[end]);
			end--;
		}
		else
		{
			mid++;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	
	return 0;
	
}
