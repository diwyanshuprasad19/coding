#include<bits/stdc++.h>
using namespace std;

bool isSubset(int arr1[], int arr2[],int m, int n)
{
	sort(arr1,arr1+m);
	sort(arr2,arr2+n);
	int i=0,j=0;
	while(i<m && j<n)
	{
		if(arr1[i]==arr2[j])
		{
			j++;
			i++;
		}
		else if(arr1[i]<arr2[j])
		i++;
		else if(arr1[i]>arr2[j])
		return false;
		
	}
	return j==n?true:false;
}



int main()
{
    int arr1[] = { 11, 1, 13, 21, 3, 7 };
    int arr2[] = { 11, 3, 7, 1 };
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
 
    if (isSubset(arr1, arr2, m, n))
        printf("arr2[] is subset of arr1[] ");
    else
        printf("arr2[] is not a subset of arr1[] ");
 
    return 0;
}
