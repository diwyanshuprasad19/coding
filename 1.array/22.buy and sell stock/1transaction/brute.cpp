#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[]={7,1,5,3,6,4};
  int n=sizeof(arr)/sizeof(arr[0]);
  int max=INT_MIN;
  int start=0,end=0;
  for(int i=0;i<n;i++)
  {
  	for(int j=i+1;j<n;j++)
  	{
  	 if(arr[j]-arr[i]>max)
  	 {
	   
  	 max=arr[j]-arr[i];
	  start=i;
	  end=j;
    } 
	  	
	}
  }	
	cout<<max<<" "<<start<<" "<<end<<endl;
	
	
	return 0;
}
