#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={2,1,5,6,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=5;
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<=k)
		count ++;
	}
	int res=0,mi=INT_MAX;
	/*
	logic for the program isthat all less than k should be together.Hence for 12537 it can be at any count length subarray.
	like for 125 or 253 or 537 and that length subarray of count.
	the number should not neccesarily be on the left.any that length subarray
	
	
	*/
	for(int i=0;i<=n-count;i++)
	{
		for(int j=i;j<i+count;j++)
		{
			if(arr[j]>k)           
			res++;
		}
		mi=min(mi,res);
		res=0;
	}
	cout<<mi;
	
	
	return 0;
}
