#include<bits/stdc++.h>
using namespace std;
#define d 10
void rabinKarp(char text[],char pattern[],int q)
{
	int n=strlen(text);
	int m=strlen(pattern);
	int i,j;
	int p=0;
	int t=0;
	int h=1;
	for(i=0;i<m-1;i++)      
	{
		h=(h*d)%q;               //we do this because consider abc coming 123 value we need 1*100 to minus it to get 23->23*10->230+(b next comib)add 2 ->232
	}                            //hence by multiplyinh it by less than m-1 times we get 1*10*10 ->100 *text[i] to minus it
	
	
	for(i=0;i<m;i++)
	{
		p=(p*d+pattern[i])%q;
		t=(t*d+text[i])%q;
	}
	for(i=0;i<=n-m;i++)
	{
		if(p==t)
		{
			for(j=0;j<m;j++)
			{
				if(text[i+j]!=pattern[j])
				break;
			}
			if(j==m)
			cout<<"found"<<i+1<<endl;
		}
		if(i<n-m)                                //we do < not<= as <= means this current is last window and we find i+m will give us array out of bound exception
		{
			t=(d*(t-text[i]*h) + text[i+m])%q;
		 } 
		 if(t<0)    // https://stackoverflow.com/questions/66346164/negative-hash-value-in-code-of-rabin-karp-algorithm
		 t=t+q;
	}
}


int main() {
  char text[] = "ABCCDDAEFG";
  char pattern[] = "CDD";
  int q = 13;                    //why by prime number->This is the main idea of the algorithm and this is what makes it faster than naïve implementations of substring search. 
                        //The purpose of dividing by a prime number when calculating the hashes is to try to get a more uniform distribution of hash values.
  rabinKarp(pattern, text, q);
}
