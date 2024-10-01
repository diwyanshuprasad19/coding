#include<bits/stdc++.h>
using namespace std;
//smallest to left
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
	int min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
		
		if(arr[min]>arr[j])
		{
		 min=j;
	    }
        }
	  swap(&arr[min],&arr[i]);
	}
			for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	return 0;
}
