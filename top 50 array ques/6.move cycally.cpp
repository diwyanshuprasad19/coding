#include<bits/stdc++.h>
using namespace std;



/*void rotate(int arr[],int n)
{
	int x=arr[n-1];
	for(int i=n-2;i>=0;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[0]=x;
}
*/
//for cyclic rotation
int main()
{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int times;
	cin>>times;
	for(i=0;i<times;i++)
	{
		rotate(arr,n);
	}
	
	
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	
	
	
	
	return 0;
	
}
