#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x=47;
	int p1=1,p2=5,n=3;
	int c1=(x>>p1)&((1U<<n)-1);
	cout<<c1<<endl;
	int c2=(x>>p2)&((1U<<n)-1);
	int xor1=c1^c2;
	xor1=(xor1<<p1)|(xor1<<p2);
	int ans=x^xor1;
	cout<<ans;
	
	return 0;
}
