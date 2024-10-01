#include<bits/stdc++.h>
using namespace std;
int main()
{
	 int mat[4][5] =
    {
        {1, 2, 1, 4, 8},
        {3, 7, 8, 5, 1},
        {8, 7, 7, 3, 1},
        {8, 1, 2, 7, 9},
    };
    unordered_map<int,int> mp;
    for(int i=0;i<5;i++)     //we store unique element in map and we store row number in them starting from 1 and whenever in that row 1 to r-1 we do row++.
    {
    	mp[mat[0][i]]=1;   //duplicate key not allowed in map
	}
	
	for(int i=1;i<4;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(mp.find(mat[i][j]) !=mp.end())
			{
				if(mp[mat[i][j]]==i)
				{
					mp[mat[i][j]]++;
				}
			}
		}
	}
unordered_map<int,int>::iterator itr;
for(itr=mp.begin();itr!=mp.end();itr++)
{
	if(itr->second==4)
	cout<<itr->second<<" ";   //this way only unique element sget printed
}
    cout<<endl;
    
    
    
 return 0;
}


