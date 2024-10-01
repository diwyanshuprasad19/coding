// C++ program to find out maximum profit by buying
// and/ selling a share atmost k times given stock
// price of n days
#include <climits>
#include <iostream>
using namespace std;

// Function to find out maximum profit by buying &
// selling/ a share atmost k times given stock price
// of n days
int maxProfit(int price[], int n, int k)
{
    int arr[k+1][n];
    for(int i=0;i<=k;i++)
    arr[i][0]=0;
    for(int i=0;i<n;i++)
    arr[0][i]=0;
    int prev;
    
    for(int i=1;i<=k;i++)
    {
    	prev=INT_MIN;
    	for(int j=1;j<n;j++)
    	{
    		prev=max(prev,arr[i-1][j-1]-price[j-1]);
    		arr[i][j]=max(arr[i][j-1],prev+price[j]);
		}
	}
	return arr[k][n-1];
}

// Driver Code
int main()
{
	int k = 3;
	int price[] = { 12, 14, 17, 10, 14, 13, 12, 15 };

	int n = sizeof(price) / sizeof(price[0]);

	cout << "Maximum profit is: "
		<< maxProfit(price, n, k);

	return 0;
}

