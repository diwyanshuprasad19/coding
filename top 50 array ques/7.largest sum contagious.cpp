#include<bits/stdc++.h>
using namespace std;


void kadane(int arr[],int n)
{
	int max=INT_MIN,start=0,end=0;
	int s=0,max_value=0;
	for(int i=0;i<n;i++)
	{
		max_value+=arr[i];
		if(max_value>max)
		{
			max=max_value;
			start=s;
			end=i;
		}
		if(max_value<0)
		{
			max_value=0;
			s=i+1;
		}
	}
	cout<<start<<end<<max<<endl;
	
	
}


int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	
	kadane(arr,n);
	return 0;
	
}
