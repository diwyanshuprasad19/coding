#include<bits/stdc++.h>
using namespace std;



int main()
{
	int array[4][4] = {{1,2,3,4},
	{5,6,7,8},
	{9,10,11,12},
	{13,14,15,16}
	};
	 int rows = sizeof array / sizeof array[0];
 int cols = sizeof array[0] / sizeof array[0][0];
	cout<<rows<<cols<<endl;
	
	
	
	
	return 0;
}
