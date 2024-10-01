#include<bits/stdc++.h>
using namespace std;
int main() //overflow hence use xor
{
int arr[]={1,2,3,5};
int n=sizeof(arr)/sizeof(arr[0]);
int first=arr[0];
int sec=1;

for(int i=1;i<n;i++)
first=first^arr[i];

for(int i=2;i<n+2;i++)
sec=sec^i;

cout<<(first^sec);





}
