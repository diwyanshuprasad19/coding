#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int l,int m,int r);

void display(int *arr,int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<" ";
	cout<<endl;
	
}
void merge(int *arr,int l,int m,int r)
{
	int nl=m-l+1;
	int nr=r-m;
	int l[nl];
	int r[nr];
	for(int i=0;i<nl;i++)
	 l[i]=arr[l+i];
	 for(int j=0;j<nr;j++)
	 r[j]=arr[m+1+j];
	int first=0,last=0,k=l;
	while(first<lnl && last<nr)
	{
		if(l[first]<=r[last])
		{
			arr[k]=l[first];
			first++;
		}
		else if(l[first]>r[last])
		{
			arr[k]=r[last];
			last++;
		}
		k++;
	}
	while(first<nl)
	{
		arr[k]=l[first];
		first++;
		k++;
	}
	while(last<nr)
	{
		arr[k]=r[last];
		k++;
		last++;
	}
}

void mergesort(int *arr,int l,int r)
{
	int m;
	if(l<r)
	{
		m=l+(r-l)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	display(arr,n)
	mergesort(arr,0,n-1);
	display(arr,n);
	
	
	return 0;
}
