#include<bits/stdc++.h>
using namespace std;


int maxWater(int arr[],int n)
{
	int left,right;
	int res=0;
	int i,j,k;
	for( i=1;i<n-1;i++) //both extreme left and right will always give zero hence including not neccesary
	{
		left=arr[i];
		for(j=0;j<i;j++)
		left=max(left,arr[j]);
		right=arr[i];
		for(k=i+1;k<n;k++)
		right=max(right,arr[k]);
		
		res+=(min(left,right)-arr[i]);
		
	}
	return res;
	
}

int main()
{
	int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
     
    cout << maxWater(arr, n);
     
    return 0;
	
	
	

}
