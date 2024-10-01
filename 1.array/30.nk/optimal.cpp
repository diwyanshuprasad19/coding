#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] = { 1, 1, 2, 2, 3, 5, 4, 2, 2, 3, 1, 1, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    m[arr[i]]++;
    
    for(auto i:m)
    {
    	if(i.second>=k)
    	cout<<i.first;
	}
    
    
    
    return 0;
}

//time complexity->O(n)
//spaceO(n)
