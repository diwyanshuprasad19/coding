#include<bits/stdc++.h>
using namespace std;
void calcNums(int nums[4])//wrong-void calcNums(int nums[])
{
 // int n=sizeof(nums)/sizeof(nums[0]); this wrong
   for(int i=0;i<4;i++)
   cout<<nums[i]<<" ";


}

int main()
{
  int mat[4][4] = { { 10, 20, 30, 40 },
					{ 15, 25, 35, 45 },
					{ 27, 29, 37, 48 },
					{ 32, 33, 39, 50 } };
calcNums(mat[0]);
  return 0;

}

