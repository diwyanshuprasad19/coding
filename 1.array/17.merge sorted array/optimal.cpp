#include<bits/stdc++.h>
using namespace std;

//can do by merge method
//we can do by almost sma ebut 2nd one sort at every turn.
int main()
{
	
	int arr1[]={1,4,7,8,10};
	int arr2[]={2,3,9};
	int n=sizeof(arr1)/sizeof(arr1[0]);
	int m=sizeof(arr2)/sizeof(arr2[0]);
	int i=0,j=0;
	int temp,tempj;
	while(i<n && j<m)
	{
		if(arr1[i]<=arr2[j])
		{
			i++;
		}
		else if(arr1[i]>arr2[j])
		{
			swap(arr1[i],arr2[j]);
			i++;
			if(j<m-1 && arr2[j+1]<arr2[j])
			{
				temp=arr2[j];
				tempj=j+1;
				while(tempj<m && arr2[tempj]<temp)
				{
					arr2[tempj-1]=arr2[tempj];
					tempj++;
				}
				arr2[tempj-1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	cout<<arr1[i];
		for(int i=0;i<m;i++)
	cout<<arr2[i];
	
	
	return 0;
}
//2nd method is gap one
/*haere above element 8 
gap =8/2=4-> 1 to 8 check if greater swap,then 4 to 10 if greater swap
continuw next for 4/2 =2 chck now for 2 gaps;
next 2/2 will be 1 check for 1 gap;
sort it this way
*/
