#include<bits/stdc++.h>
using namespace std;



int main()
{
    int mat[4][4] = { {0, 0, 0, 1},
                    {0, 1, 1, 1},
                    {1, 1, 1, 1},
                    {0, 0, 0, 0}};
 int j=4-1;
 int max_row;
 int max_1=0;
   for(int i=0;i<4;i++)
   {
   	while(j>=0 && mat[i][j]==1)
   	{
   		max_1++;
   		max_row=i;
   		j--;
	   }
   }
 cout<<max_row<<" "<<max_1;
    return 0;
}
