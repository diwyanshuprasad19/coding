#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[]={1,4,45,6,10,8};
int len=sizeof(arr)/sizeof(arr[0]);
sort(arr,arr+len);
int sum=22;
int l,r;
for(int i=0;i<len-2;i++)
{
  l=i+1;
  r=len-1;
  while(l<r)
  {
  	if(arr[i]+arr[l]+arr[r]==sum)
  	{
  		cout<<arr[i]<<arr[l]<<arr[r];
  		l++;
  		r--;
	  }
	  else if(arr[i]+arr[l]+arr[r]<sum)
	  l++;
	  else if(arr[i]+arr[l]+arr[r]>sum)
	  r--;
  }

	
}	
	
	
	
	return 0;
}
