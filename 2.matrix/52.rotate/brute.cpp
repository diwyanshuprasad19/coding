#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[4][4] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };
  int res[4][4];
  int n=4;
  for(int i=0;i<4;i++)
  {
  	for(int j=0;j<4;j++)
  	{
  		res[i][j]=arr[n-1-j][i];
	  }
  }
  
    for(int i=0;i<4;i++)
  {
  	for(int j=0;j<4;j++)
  	{
  		cout<<res[i][j]<<" ";
	  }
	  cout<<endl;
  }
  
  
    return 0;
}
