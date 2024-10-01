// C++ program to find first and last occurrence of
// an elements in given sorted array
#include <bits/stdc++.h>
using namespace std;

// Function for finding first and last occurrence
// of an elements
void findFirstAndLast(int arr[], int n, int x)
{
      int first=-1,last;
      for(int i=0;i<n;i++)
      {
      	if(arr[i]==x && first==-1)
      	{
		  
      	first=i;
      	last=i;
      }
      	else if(arr[i]==x)
      	last=i;
	  }
	  cout<<first<<" "<<last;
}

// Driver code
int main()
{
	int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
	int n = sizeof(arr) / sizeof(int);
	int x = 2;
	findFirstAndLast(arr, n, x);
	return 0;
}
//time complexity->O(n)
