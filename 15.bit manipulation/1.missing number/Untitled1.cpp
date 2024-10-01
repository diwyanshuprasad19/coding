#include<bits/stdc++.h>
using namespace std;
int main() //overflow hence use xor
{
	int arr[]={1,2,3,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int total=(n+1)*(n+2)/2;
	int sum=0;
	for(int i=0;i<n;i++)
	sum=sum+arr[i];
	int num=total-sum;
	cout<<num;
}
