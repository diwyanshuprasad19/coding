#include<bits/stdc++.h>
using namespace std;
int main()
{
	 int arr[] = { 1, 1, 2, 2, 3, 5, 4, 2, 2, 3, 1, 1, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    sort(arr,arr+n);
    int count=1;
    for(int i=0;i<n;i++)
    {
    	if(arr[i]==arr[i+1])
    	count++;
    	else
    	{
    		if(count>=k)
    		cout<<arr[i];
    		count=1;
		}
	}
	
	
	
	return 0;
}
