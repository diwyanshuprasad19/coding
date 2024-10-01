#include<bits/stdc++.h>
using namespace std;
//time complexity will be O(n) and space will be O(n) too
int main()
{
	int arr[]={1,-1,10,2,3,-4,5,6,-8};
	int n=sizeof(arr)/sizeof(arr[0]);
	int pos[n],neg[n];
	int p=0,ne=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
		neg[ne++]=arr[i];
		else
		pos[p++]=arr[i];
	}
	int p1=0,n1=0,k=0;
	while(p1<p && n1<ne)
	{
		if(k%2==0)
		{
			arr[k++]=pos[p1++];
		}
		else
		{
			arr[k++]=neg[n1++];
		}
		
	}
	while(p1<p)
	{
		arr[k++]=pos[p1++];
	}
	while(n1<ne)
	{
		arr[k++]=neg[n1++];
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	
	
	
	
	
	return 0;
}
