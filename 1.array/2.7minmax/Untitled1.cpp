#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int min=arr[0],max=arr[0];
	for(int j=1;j<n;j++)
	{
		if(max<arr[j])
		max=arr[j];
		else if(min>arr[j])
		min=arr[j];
	}
	cout<<endl;
	cout<<min<<" "<<max;
	
	
	return 0;
}
