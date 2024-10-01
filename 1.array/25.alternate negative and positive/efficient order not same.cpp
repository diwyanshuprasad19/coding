#include<bits/stdc++.h>
using namespace std;
//not in sequence
void pa(int arr[],int n)
{
	for(int i=0;i<n;i++)
	cout<< arr[i]<<" ";
	cout<<endl;
}

int main()
{
	int arr[]={2,3,-4,10,11,12,13,-1,6,-9};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i=0,j=n-1;
	while(i<j)
	{
		if(arr[i]>0)
		i++;
		else if(arr[i]<0)
		{
			swap(arr[i],arr[j]);
			j--;
		}
	}
	pa(arr,n);
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>0)
		count++;
	}
	i=1,j=count;
	while(i<n &&j<n)
	{
		swap(arr[i],arr[j]);
		i=i+2;
		j=j+1;
	}
	pa(arr,n);
	return 0;
}
