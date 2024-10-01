#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = { 12, 4,  7,  9,  2,  23, 25, 41, 30,
                  40, 28, 42, 30, 44, 48, 43, 50 };
    int m = 7; // Number of students
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n);
    int diff=INT_MAX;
    int res;
    for(int i=0;i<=n-m;i++)
    {
    	res=arr[i+m-1]-arr[i];
    	diff=min(diff,res);
	}
	cout<<diff;
    return 0;
}
