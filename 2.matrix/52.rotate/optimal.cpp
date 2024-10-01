+ #include<bits/stdc++.h>
using namespace std;

printmat(int arr[4][4])
{
	      for(int i=0;i<4;i++)
  {
  	for(int j=0;j<4;j++)
  	{
  		cout<<arr[i][j]<<" ";
	  }
	  cout<<endl;
  }
  
}
int main()
{
    int arr[4][4] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };

  int n=4;
  int temp;
  for(int i=0;i<4;i++)
  {
  	for(int j=0;j<i;j++)
  	{
  		temp=arr[i][j];
  		arr[i][j]=arr[j][i];
  		arr[j][i]=temp;
	  }
  }
    for(int i=0;i<4;i++)
  {
  	for(int j=0;j<n/2;j++)
  	{
  		swap(arr[i][j],arr[i][n-1-j]);
	  }
  }
  printmat(arr);
    return 0;
}
