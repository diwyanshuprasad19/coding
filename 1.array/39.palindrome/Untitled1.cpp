https://www.geeksforgeeks.org/problems/palindromic-array-1587115620/1

#include<bits/stdc++.h>
using namespace std;
/*
 single element always palindrome
 121 from left and right same hence palindrome
 12345 max no of merge function will be n-1 n is size;
 1+2->3+3->6+4->10+5 see 4 merge there but we need minimum

now here logic take 2 pointer and if same just i++ and j--;
ifarr[i]<arr[j] means that arr[i is smaller hence if we add it with next i+1 it might come same as arr[j] 
same logic for arr[j smaller

*/

check on youtube


int main()
{
	 int arr[] = {15, 4, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
	int i=0,j=n-1;
	int ans=0;
	while(i<=j)
	{
		if(arr[i]==arr[j])
		{
			i++;
			j--;
		}
		else if(arr[i]<arr[j])
		{
			i++;
			arr[i]=arr[i]+arr[i-1];
			ans++;
		}
		else
		{
			j--;
			arr[j]=arr[j]+arr[j+1];
			ans++;
		}
	}
	cout<<ans;
	
	return 0;
}
