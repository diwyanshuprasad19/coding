#include<bits/stdc++.h>
using namespace std;


void call(int arr[],int data[],int start,int end,int index,int limit)
{
	int i;
	if(index==limit)
	{
		for(i=0;i<limit;i++)
		cout<<data[i]<<" ";
		cout<<endl;
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
	int arr[] = { 12, 4,  7,  9,  2,  23, 25, 41, 30,
                  40, 28, 42, 30, 44, 48, 43, 50 };
    int m = 2; 
    int n = sizeof(arr) / sizeof(arr[0]);
    temporary(arr,n,m);
	
	
	
	return 0;
}

