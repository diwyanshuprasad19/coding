#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={2,6,5,8,11};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=14;
int flag=1;
  int i,j;
	for(i=0;i<n-1;i++)
	{    
		for(j=i+1;j<n;j++)
		{
			
			if(arr[i]+arr[j]==k)
			{
				flag=0;
				break;
				
			}
		}
		if(flag!=1)
		break;
	}
	cout<<i<<j;
	return 0;
}
