#include<bits/stdc++.h>
using namespace std;

string printSequence(string str[],string input)
{
	string output="";
	int n=input.length();
	int k;
	for(int i=0;i<n;i++)
	{
		if(input[i]==' ')
		output+="0";
		else
		{
			k=input[i]-'A';
			output+=str[k];
		}
	
	}
	return output;
}

int main()
{
	    string str[] = {"2","22","222",
                    "3","33","333",
                    "4","44","444",
                    "5","55","555",
                    "6","66","666",
                    "7","77","777","7777",
                    "8","88","888",
                    "9","99","999","9999"
                   };
 
    string input = "GEEKSFORGEEKS";
    string s=printSequence(str, input);
    cout<<s;
    return 0;
	
}
