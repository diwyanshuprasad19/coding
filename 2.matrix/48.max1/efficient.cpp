#include<bits/stdc++.h>
using namespace std;


int first(int arr[],int low ,int high)
{
	int mid;
	while(low<=high)
	{
		mid=low+(high-low)/2;
		
		if(mid==0||arr[mid-1]==0 &&arr[mid]==1)  //mid ==0 as if arr[mid]==0 the mid always shift to the right
		return mid;
		else if(arr[mid]==0)
		return first(arr,mid+1,high);
		return first(arr,low,mid-1);    //arr[mid]==1 comes
	}
	return -1; //all col is 0
}

int row(int arr[4][4])
{
	int index,max=INT_MIN;
	int pos;
	for(int i=0;i<4;i++)
	{
		index=first(arr[i],0,3);
		if(index!=-1 && 4-index>max)
		{
			max=4-index;
			pos=i;
		}
	}
	return pos;
}
int main()
{
    int mat[4][4] = { {0, 0, 0, 1},
                    {0, 1, 1, 1},
                    {1, 1, 1, 1},
                    {0, 0, 0, 0}};
 
    cout << "Index of row with maximum 1s is " << row(mat);
 
    return 0;
}
