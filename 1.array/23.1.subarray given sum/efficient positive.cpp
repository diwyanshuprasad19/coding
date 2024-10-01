#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int start=0;
    int add=23;
    int sum=0;
    for(int i=0;i<n;i++)
    {
    	sum=sum+arr[i];
    	if(sum>add && start<i)
    	{
    		sum=sum-arr[start];
    		start++;
		}
		if(sum==add)
		{
			cout<<start<<i;
			break;
		}
	}
	
	
	
	return 0;
}
