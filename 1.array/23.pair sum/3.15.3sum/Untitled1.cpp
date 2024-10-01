#include<bits/stdc++.h>
using namespace std;
//no duplicate


void Print_Vector(vector<int> Vec)
{
    for (int i = 0; i < Vec.size(); i++) {
        cout << Vec[i] << " ";
    }
    cout << endl;
    return;
}

int main()
{
	int arr[]={-1,0,1,2,-1,-4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i,j,k;
	set< vector<int> > s;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(arr[i]+arr[j]+arr[k]==0)
				{
				    vector<int> v(3);
				v[0]=arr[i];
				v[1]=arr[j];
				v[2]=arr[k];
					s.insert(v);
				}
			}
		}
	}

	for(auto itr=s.begin();itr!=s.end();itr++)
	{
        Print_Vector(*itr);
	}
	return 0;
}
