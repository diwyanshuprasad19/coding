// C++ program to Count set
// bits in an integer
//bitwise store in unisigned
//since decimalto binary->log 2base n is number 
#include <bits/stdc++.h>
using namespace std;

/* Function to get no of set bits in binary
representation of positive integer n */
unsigned int countSetBits(unsigned int n)
{
	unsigned int count = 0;
	while (n) {
		count += n & 1;
		n >>= 1;
	}
	return count;
}

/* Program to test function countSetBits */
int main()
{
	int i = 13;
	unsigned int k=i&1;
	cout<<k;
	cout << countSetBits(i);
	return 0;
}

// This code is contributed
// by Akanksha Rai

