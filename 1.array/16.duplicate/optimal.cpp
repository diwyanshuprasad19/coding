#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={3,1,3,4,2};
	int n=sizeof(arr)/sizeof(arr[0]);
    int k=n-1;
    int sum=(k)*(k+1);
    sum=sum/2;
    int sum1=0;
    for(int i=0;i<n;i++)
    sum1=sum1+arr[i];
    int diff=sum1-sum;
    cout<<diff;
	
	
	
	return 0;
}
