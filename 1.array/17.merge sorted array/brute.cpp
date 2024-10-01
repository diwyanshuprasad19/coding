#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int arr1[]={1,4,7,8,10};
	int arr2[]={2,3,9};
	int n=sizeof(arr1)/sizeof(arr1[0]);
	int m=sizeof(arr2)/sizeof(arr2[0]);
	int arr3[n+m];
	int k=0;
	for(int i=0;i<n;i++)
	{
	arr3[k]=arr1[i];
	k++;
    }
		for(int i=0;i<m;i++)
	{
	arr3[k]=arr2[i];
	k++;
    }
    k=0;
    sort(arr3,arr3+n+m);
    for(int j=0;j<n;j++)
    {
    	arr1[j]=arr3[k];
    	k++;
	}
	    for(int j=0;j<m;j++)
    {
    	arr2[j]=arr3[k];
    	k++;
	}
	for(int i=0;i<n;i++)
	cout<<arr1[i];
		for(int i=0;i<m;i++)
	cout<<arr2[i];
	
	return 0;
}
