#include<bits/stdc++.h>
using namespace std;

void negative(int arr[],int n)
{
	int j=0,i;
	for(i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			swap(arr[i],arr[j]);
			j++;
		}
	}
}

int main()
{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	negative(arr,n);
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	return 0;
}
