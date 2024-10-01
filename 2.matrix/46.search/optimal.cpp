// C++ program to search an element in row-wise
// and column-wise sorted matrix
#include <bits/stdc++.h>

using namespace std;

/* Searches the element x in mat[][]. If the
element is found, then prints its position
and returns true, otherwise prints "not found"
and returns false */


//start from right most col and 1st row
//here j positon lower will be higher value and left side lower value
//if comes lower than x  i++ which makes it go down the row
//if higher j-- as makes col go left
int search(int arr[4][4], int n, int x)
{
  int i=0,j=3;
  while(i<=3 && j>=0)         
  {                             
  	if(arr[i][j]==x)
  	return 1;
  	else if(arr[i][j]<x)
  	i++;
  	else
  	j--;
  }
  return -1;
}

// Driver code
int main()
{
	int mat[4][4] = { { 10, 20, 30, 40 },
					{ 15, 25, 35, 45 },
					{ 27, 29, 37, 48 },
					{ 32, 33, 39, 50 } };
	int l=search(mat, 4, 29);
	if(l==1)
	cout<<"true";
	else 
	cout<<"false";

	return 0;
}

// This code is contributed
// by Akanksha Rai(Abby_akku)

TC:O(n+m)
SC:O(1)