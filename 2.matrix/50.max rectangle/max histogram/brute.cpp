// A Divide and Conquer Program to find maximum rectangular area in a histogram
#include <bits/stdc++.h>
using namespace std;
void getMaxAreaRec(int arr[],int n);
//use left and right of that arr[i] to find the area
void getMaxArea(int arr[],int n)
{
	int left =0,right=0,count;
	int max=0,area;
   for(int i=0;i<n;i++)
   {
   	left=i;
   	right=i+1;
   	count=0;
   	area=0;
   	while(arr[left]>=arr[i] &&  left>=0)
   	{
   		count++;
   		left--;
	}
	while(arr[right]>=arr[i] && right<n)
	{
		count++;
		right++;
	}
	area=arr[i]*count;
	if(area>=max)
	max=area;
	
   }
   cout<<max;
}

// Driver program to test above functions
int main()
{
	int hist[] = {6, 2, 5, 4, 5, 1, 6};
	int n = sizeof(hist)/sizeof(hist[0]);
     getMaxArea(hist, n);
	return 0;
}

