// C++ program to find out maximum profit by
// buying and selling a share atmost k times
// given stock price of n days
#include <climits>
#include <iostream>
using namespace std;

// Function to find out maximum profit by buying
// & selling a share atmost k times given stock
// price of n days
int maxProfit(int price[], int days, int tran)
{
	int arr[tran+1][days];
	for(int i=0;i<=tran;i++)
	arr[i][0]=0;
	for(int j=0;j<days;j++)
	arr[0][j]=0;
	int max_now;
	for(int i=1;i<=tran;i++)
	{
		for(int j=1;j<days;j++)
		{
			max_now=INT_MIN;
			for(int m=0;m<j;m++)
			{
				max_now=max(max_now,price[j]-price[m]+arr[i-1][m]);
			}
			arr[i][j]=max(max_now,arr[i][j-1]);
		}
	}
	return arr[tran][days-1];
}

// Driver code
int main()
{
	int k = 2;
	int price[] = { 10, 22, 5, 75, 65, 80 };
	int n = sizeof(price) / sizeof(price[0]);

	cout << "Maximum profit is: "
		<< maxProfit(price, n, k);

	return 0;
}

