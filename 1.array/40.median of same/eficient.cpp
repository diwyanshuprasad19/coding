#include<bits/stdc++.h>
using namespace std;

//logic is that we find using check lement of both array whichever is less store it in m2 and m1 store earler less element
//this way we find 1 2 12 13 15 17 ->this is 1st minimum  2nd minimum  3rd minimum and so on
//doing i++ and j++ we find that position min
//we go till n-1 and n
//m1 store previous minimum and m2 current minimum/
//this way we find  n-1 elemt and n element in ascending order 

int getMedian(int arr1[],int arr2[],int n )
{
	int m1=-1;
	int m2=-1;
	int i=0;
	int j=0;
	for(int k=0;k<=n;k++)
	{
		if(i==n)
		{
			m1=m2;
			m2=arr2[0];
			break;
		}
		if(j==n)
		{
			m1=m2;
			m2=arr1[0];
			break;
		}
		if(arr1[i]<=arr2[j])
		{
			m1=m2;
			m2=arr1[i];
			i++;
		}
		else
		{
			m1=m2;
			m2=arr2[j];
			j++;
		}
		
	}
	return((m1+m2)/2);
	
}

int main()
{
    int ar1[] = {1, 12, 15, 26, 38};
    int ar2[] = {2, 13, 17, 30, 45};
 
    int n1 = sizeof(ar1)/sizeof(ar1[0]);
    int n2 = sizeof(ar2)/sizeof(ar2[0]);
    if (n1 == n2)
        printf("Median is %d", getMedian(ar1, ar2, n1));
    else
        printf("Doesn't work for arrays of unequal size");
    getchar();
    return 0;
}
