#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,3,4,2,2};
	int n=sizeof(arr)/sizeof(arr[0]);
   unordered_map<int>m;
   for(int i=0;i<n;i++)
  {
   
   if(m[arr[i]]==0)
   m[arr[i]]++;
   else
   {
   cout<<arr[i];
   break;
}
}
	
	
	return 0;
}
//most optimalwould be linked list cycle method.
consider array 1 3 4 2 2
start head at arr[0]=1
1 will jump to index 1
3 will jump to index 3
2 will jump to index 2
4 will jump to index 4
2 will with earlier 2 form a cycle->just use detect and find loop to find duplicate element.
