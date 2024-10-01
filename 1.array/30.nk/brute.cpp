#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] = { 1, 1, 2, 2, 3, 5, 4, 2, 2, 3, 1, 1, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    int count=0;
    set<int>s;
    for(int i=0;i<n;i++)
    {
    	for(int j=i;j<n;j++)
    	{
    		if(arr[i]==arr[j])
    		count++;
		}
		if(count>=k)
		{
		s.insert(arr[i]);
	  }
	
		count=0;
	}
	for(auto it=s.begin();it!=s.end();it++)
	cout<<*it;
	return 0;
}
//time complexity->O(n2)
//spaceO(n))

