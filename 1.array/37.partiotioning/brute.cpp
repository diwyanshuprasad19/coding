#include<bits.stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 14, 5, 20, 4, 2, 54, 20, 87,
                98, 3, 1, 32};
    int n = sizeof(arr)/sizeof(arr[0]);
 int lowvalue=10,highvalue=20;
 int flag1=0,flag2=0;
 
 for(int i=0;i<n;i++)
 {
 	if(arr[i]==lowvalue)
 	flag1=1;
 	if(arr[i]==highvalue)
 	flag2=1;
 }
sort(arr,arr+n);
   if(flag1 && flag2)
   {
   	coutt<<1;
   }
   else
   {
   	cout<<0;
   }
}
