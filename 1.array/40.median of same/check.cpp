#include<bits/stdc++.h>
using namespace std;

void eco(int arr[])
{
	for(int i=0;i<3;i++)
	cout<<arr[i];
}
int main()
{
	int arr[]={1,2,3,4};

int *p=arr;
*p++;
int n=sizeof(p)/sizeof(p);
for(int i=0;i<n;i++)
cout<<arr[i];
int *q=arr+2;
cout<<q[0];
}
