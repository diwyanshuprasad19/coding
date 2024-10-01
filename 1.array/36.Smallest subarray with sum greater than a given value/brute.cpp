#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] = {1, 4, 45, 6, 10, 19};
    int x = 51;
    int n = sizeof(arr)/sizeof(arr[0]);
    int minlength=INT_MAX;
    int curr;
    for(int i=0;i<n;i++)
    {
    	curr=arr[i];
    	if(arr[i]>x)
    	{
    	minlength=1;
        }
        for(int j=i+1;j<n;j++)
        {
        	curr=curr+arr[j];
        	if(curr>x)
        	{
        		minlength=min(minlength,j-i+1);
			}
		}
    	
	}
if(minlength==INT_MAX)
cout<<"not possible";
else 
cout<<minlength;
    
    
    
    
    return 0;
}
