#include<bits/stdc++.h>
using namespace std;

int main()
{

   int n,i,j,min,max;
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
   {
   	cin>>arr[i];
   }
	min=arr[0];
	max=arr[0];
	if(n==1)
	{
		;
	}
	else if(n==2)
	{
		if(arr[0]>arr[1])
		{
			max=arr[0];
			min=arr[1];
		}
		else
		{
			max=arr[1];
			min=arr[0];	
		}
		
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(arr[i]>max)
			{
				max=arr[i];
			}
			else if(arr[i]<min)
			{
				min=arr[i];
			}
		}
	}
	
	cout<<max<<min<<endl;
	
	
	return 0;
}
