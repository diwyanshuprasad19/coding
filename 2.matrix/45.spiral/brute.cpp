#include<bits/stdc++.h>
using namespace std;


void spiralPrint(int row,int col,int a[3][6])
{
	int top=0,down=row-1,left=0,right=col-1;
	int i;
	while(top<=down && left<=right)   //12  next row 34 see thsi condition
	{
		for(i=left;i<=right;i++)
		cout<<a[top][i]<<" ";
		top++;
		for(i=top;i<=down;i++)
		cout<<a[i][right]<<" ";
		right--;
		//this condition is for when only 1 row and col remain till then consider 3*1 or 1*3 both work
		if(top<=down)    //only one row was there hence top++ will exceed now
		{
			for( i=right;i>=left;i--)
			cout<<a[down][i]<<" ";
			down--;
		}
		if(left<=right) //only one col was there hence left++ will exceed now
		{
			for( i=down;i>=top;i--)
			cout<<a[i][left]<<" ";
			left++;
		}
	}
}


int main()
{
    int a[3][6] = { { 1, 2, 3, 4, 5, 6 },
                    { 7, 8, 9, 10, 11, 12 },
                    { 13, 14, 15, 16, 17, 18 } };
 
    // Function Call
    spiralPrint(3, 6, a);
    return 0;
}

TC:O(m*n)
SC:O(1)

