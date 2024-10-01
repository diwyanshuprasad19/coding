#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={9,5,4,6,7,1,2,3,8};
	int len=sizeof(arr)/sizeof(arr[0]);
	int k=5;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<len-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			swap(arr[j],arr[j+1]);
		}
	}
	cout<<arr[len-k];
	return 0;
}
//complexity->n*k
//use merge sort for->nlogn complexity
