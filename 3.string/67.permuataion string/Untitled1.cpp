//using back tracking:https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	vector<string>ans;
	
	void permute(string s,string an)
	{
	    if(s.length()==0)
	    ans.push_back(an);
	    
	    for(int i=0;i<s.length();i++)
	    {
	        char ch=s[i];
	        string left=s.substr(0,i);
	        string right=s.substr(i+1);
	        string rest=left+right;
	        permute(rest,an+ch);
	    }
	}
		vector<string>find_permutation(string S)
		{
		    string an="";
		    sort(S.begin(),S.end());
		    permute(S,an);
		    return ans;
		}
};
