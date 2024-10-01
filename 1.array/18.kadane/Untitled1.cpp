#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max=INT_MIN;
    int sum;
    int start,end,s;
    for(int i=0;i<n;i++)
	{
	   sum=sum+a[i];
	   if(max<sum)
	   {
	   	 max=sum;
	   	start=s;
	   	end=i;
	   	
		}
		if(sum<0)
		{
		sum=0;	
		s=i;
	    }
	}
	
	cout<<max<<endl;
	cout<<start+1<<" "<<end<<endl;
	
	
	return 0;
}

time complexity:O(n)
spce complexity:O(1)
