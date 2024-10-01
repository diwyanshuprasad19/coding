#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	 int arr1[] = { 11, 1, 13, 21, 3, 7 };
    int arr2[] = { 11, 3, 7, 1 };
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int count=0;
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    	{
    		if(arr2[i]==arr1[j])
    		count++;
		}
	}
	if(count==n)
	cout<<1;
	else
	cout<<0;
	return 0;
}
