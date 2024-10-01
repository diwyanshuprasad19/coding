#include<bits/stdc++.h>
using namespace std;
//single return only
int main()
{
	int arr[]={10, 2, -2, -20, 10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum=-10;
	int curr;
	int flag=0;
	for(int i=0;i<n;i++)
	{
		curr=0;
		if(flag==1)
		break;
		for(int j=i;j<n;j++)
		{
			curr=curr+arr[j];
			if(curr==sum)
			{
				cout<<"found"<<i<<" "<<j;
				flag=1;
			}
		}
	}
	
	
	
	
	return 0;
}
