#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int l=s.length();
	char ch;
	//length is 8 and 7
	//8->0 to 7 and 8/2 is 4 ->0 1 2 3 4 5 6 7 hen 3 only neede
	//7->0 to 6 7/2 is 3->0 1 2 3 4 5 6 hence onlt 2 is need
	// hence less than n/2
	//interchange l-1-i
	for(int i=0;i<l/2;i++)
	{
		swap(s[i],s[l-i-1]);
	}
	cout<<s<<endl;
	
	return 0;
}

//time compexity-O(n) 
//space-O(1)
