#include<bits/stdc++.h>
using namespace std;
//putting the highest element to the right
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

int main()
{
	int n,i,j;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			swap(&arr[j],&arr[j+1]);
		}
	}
		for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	
	return 0;
}
