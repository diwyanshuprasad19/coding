#include<bits/stdc++.h>
using namespace std;
//concept beind this
// we need to get median of both the array
//two array given.same median means same type of element hence median same when merged
//higher median means that element mainly gretaer than one with lower median
//hence it means left element still higher than right part
//hence for higher median we need left partwhile lower we need right part 
//this shows between both element between them
//now when 2 size array left in both.find max for n-1 part and min for n part just return /2 both

// A divide and conquer based efficient solution to find median
// of two sorted arrays of same size.

int median(int [], int); /* to get median of a sorted array */

/* This function returns median of ar1[] and ar2[].
Assumptions in this function:
Both ar1[] and ar2[] are sorted arrays
Both have n elements */
int getMedian(int ar1[], int ar2[], int n)
{
	/* return -1 for invalid input */
	if (n <= 0)
		return -1;
	if (n == 1)
		return (ar1[0] + ar2[0])/2;
	if (n == 2)
		return (max(ar1[0], ar2[0]) + min(ar1[1], ar2[1])) / 2; 
		/*
		consider 12 and 34 1st case and 14 and 23 consider see this wformulae works for both of them.
		i can derive above formulae from here
		
		*/

	int m1 = median(ar1, n); /* get the median of the first array */
	int m2 = median(ar2, n); /* get the median of the second array */

	/* If medians are equal then return either m1 or m2 */
	if (m1 == m2)
		return m1;

	/* if m1 < m2 then median must exist in ar1[m1....] and
		ar2[....m2] */
	if (m1 < m2)
	{
		if (n % 2 == 0)
			return getMedian(ar1 + n/2 - 1, ar2, n - n/2 +1);
		return getMedian(ar1 + n/2, ar2, n - n/2);
	}

	/* if m1 > m2 then median must exist in ar1[....m1] and
		ar2[m2...] */
	if (n % 2 == 0)
		return getMedian(ar2 + n/2 - 1, ar1, n - n/2 + 1);
	return getMedian(ar2 + n/2, ar1, n - n/2);
}

/* Function to get median of a sorted array */
int median(int arr[], int n)
{
	if (n%2 == 0)
		return (arr[n/2] + arr[n/2-1])/2;
	else
		return arr[n/2];
}

/* Driver program to test above function */
int main()
{
	int ar1[] = {1, 2, 3, 6};
	int ar2[] = {4, 6, 8, 10};
	int n1 = sizeof(ar1)/sizeof(ar1[0]);
	int n2 = sizeof(ar2)/sizeof(ar2[0]);
	if (n1 == n2)
		printf("Median is %d", getMedian(ar1, ar2, n1));
	else
		printf("Doesn't work for arrays of unequal size");
	return 0;
}

