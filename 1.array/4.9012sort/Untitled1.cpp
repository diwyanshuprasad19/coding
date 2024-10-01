#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int flag=1;
	int low=0,high=n-1,curr=0;
	while(curr<=high)
	{
		if(arr[curr]==0)
		{
			swap(arr[curr],arr[low]);
			low++;
			curr++;
		}
		else if(arr[curr]==flag)
		curr++;
		else if(arr[curr]==2)
		{
			swap(arr[curr],arr[high]);
			high--;
		}
		
	}
		for(int i=0;i<n;i++)
		cout<<arr[i];
	
	
	return 0;
}
