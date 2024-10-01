#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	for(int j=0;j<n/2;j++)
	swap(arr[j],arr[n-1-j]);
	for(int i=0;i<n;i++)
	cout<<arr[i];
	
	return 0;
	
}
