https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1


#include<bits/stdc++.h>
using namespace std;

int res=INT_MAX;
void call(int arr[],int data[],int start,int end,int index,int limit)
{
	int i,mi=INT_MAX,ma=INT_MIN;
	if(index==limit)
	{
		for(i=0;i<limit;i++)
		{
			mi=min(mi,data[i]);
			ma=max(ma,data[i]);
		}
		res=min(res,ma-mi);
		return;
    }    
		
		for(i=start;i<end && limit-index<=end-i;i++)
		{
			data[index]=arr[i];
			call(arr,data,i+1,end,index+1,limit);
		}
	
}





void temporary(int arr[],int n,int m)
{
	int data[m];
	call(arr,data,0,n,0,m);
}



int main()
{
	int arr[] = { 17, 3, 2, 4, 9, 12, 56 };
    int m = 3; 
    int n = sizeof(arr) / sizeof(arr[0]);
    temporary(arr,n,m);
	
	cout<<res;
	
	return 0;
}
