// C++. program for the above approach
#include <iostream>
using namespace std;

#define R 4
#define C 4

// Function for printing matrix in spiral
// form i, j: Start index of matrix, row
// and column respectively m, n: End index
// of matrix row and column respectively
void print(int arr[R][C], int top, int down, int left, int right)
{
	int i;
     if(top>down && left>right)
     return;
     for(i=left;i<=right;i++)
     cout<<arr[top][i]<<" ";
	 for(i=top+1;i<=down;i++)
	 cout<<arr[i][right]<<" ";
	 if(top+1<=down)     
	 {
	 	for(i=right-1;i>=left;i--)
	 	cout<<arr[down][i]<<" ";
	 	
	 }
	 if(left+1<=right)
	 {
	 	for(i=down-1;i>=top+1;i--)
	 	cout<<arr[i][left]<<" ";
	 }
     return print(arr,top+1,down-1,left+1,right-1);
     
}

// Driver Code
int main()
{

	int a[R][C] = { { 1, 2, 3, 4 },
					{ 5, 6, 7, 8 },
					{ 9, 10, 11, 12 },
					{ 13, 14, 15, 16 } };

	// Function Call
	print(a, 0,R-1,0,C-1);
	return 0;
}
// This Code is contributed by Ankur Goel

