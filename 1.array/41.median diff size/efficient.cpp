#include<bits/stdc++.h>
using namespace std;
int getMedian(int arr1[],int arr2[],int n,int m)
{
	int i=0,j=0,m1=-1,m2=-1,count=(n+m)/2;
	for(int k=0;k<=count;k++)
	{
		m1=m2;
		if(i!=n && j!=m)//niether both tranversed
		{
			m2=arr1[i]<=arr2[j]?arr1[i++]:arr2[j++];
		}
		else if(i<n)        //arr2 all eleemt transversed
		{
			m2=arr1[i++];
		}
		else
		{
			m2=arr2[j++];    //arr1 all eleemt transversed
		}
	}
	if(m+n%2==0)
	{
		return ((m1+m2)/2);
	}
	else
	{
		return m2;
	}
}



int main()
{
    int ar1[] = {900};
    int ar2[] = {5,8,10,20};
    int n1 = sizeof(ar1)/sizeof(ar1[0]);
    int n2 = sizeof(ar2)/sizeof(ar2[0]);
    cout << getMedian(ar1, ar2, n1, n2);
}
