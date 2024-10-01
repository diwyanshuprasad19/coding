#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr1[]={1,2,3,6};
	int arr2[]={4,6,8,9};
	int n=sizeof(arr1)/sizeof(arr1[0]);
	int m=n+n;
	int res[m];
	for(int i=0;i<n;i++)
	{
		res[i]=arr1[i];
		res[i+n]=arr2[i];
	}
	sort(res,res+m);

	int median=res[n]+res[n-1];
	median=median/2;
	cout<<median;
	return 0;
	
}
//array is already sorted.
//even 1234 is 2+3=5/2=2.5
//odd->12345 mid element 3
//above median method.
//time complexity->nlogn and n
