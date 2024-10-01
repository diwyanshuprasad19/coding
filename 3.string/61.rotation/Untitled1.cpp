#include<bits/stdc++.h>
using namespace std;
int main()
{
	 string str1 = "AACD", str2 = "ACDA";
	 string temp=str1+str1;
	 if(str1.length()!=str2.length())
	 cout<<"not there";
	 else
	 {
	 	if(temp.find(str2)!=string::npos)
	 	cout<<"there";
	 	else
	 	cout<<"not there";
	 }
	 return 0;
}
