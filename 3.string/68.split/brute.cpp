/* A Top-Down DP implementation of LCS problem */
#include <bits/stdc++.h>
using namespace std;


/* Driver code */
int main()
{
	char X[] = "AGGTAB";
	char Y[] = "GXTXAYB";

	int m = strlen(X);
	int n = strlen(Y);
	int count=0;
unordered_map<char,int>mp;
for(int i=0;i<m;i++)
mp[X[i]]++;
for(int i=0;i<n;i++)
if(mp[Y[i]])
{
	count++;
	mp[Y[i]]--;
}
cout<<count<<endl;
	return 0;
}

