// C++ program to search an element in row-wise
// and column-wise sorted matrix
#include <bits/stdc++.h>

using namespace std;

/* Searches the element x in mat[][]. If the
element is found, then prints its position
and returns true, otherwise prints "not found"
and returns false */
int res=0;
void binarysearch(int arr[4],int l,int r,int x)
{
	int mid;
	while(l<=r)
	{
		mid=l+(r-l)/2;
		if(arr[mid]==x)
		{
		cout<<"found";
	}
		else if(arr[mid]>x)
		binarysearch(arr,l,mid-1,x);
		binarysearch(arr,mid+1,r,x);
	}
}
void search(int mat[4][4], int n, int x)
{
    
    for(int i=0;i<4;i++)
    {
    binarysearch(mat[i],0,3,x);

	}
}
//this soloution works for both gfg and leetcode one
// Driver code
int main()
{
	int mat[4][4] = { { 10, 20, 30, 40 },
					{ 15, 25, 35, 45 },
					{ 27, 29, 37, 48 },
					{ 32, 33, 39, 50 } };
	search(mat, 4, 29);
     cout<<res;
	return 0;
}

