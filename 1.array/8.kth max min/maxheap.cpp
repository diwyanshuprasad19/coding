K’th smallest element in an unsorted array using Priority Queue(Max-Heap):
priotity queue:

#include <bits/stdc++.h>
using namespace std;

// Function to find the kth smallest array element
int kthSmallest(int arr[], int N, int K)
{
	// Create a max heap (priority queue)
	priority_queue<int> pq; // min element at top
        //std::priority_queue<int, std::vector<int>, std::greater<int>> pq; greater element at top
	// Iterate through the array elements
	for (int i = 0; i < N; i++) {
		// Push the current element onto the max heap
		pq.push(arr[i]);

		// If the size of the max heap exceeds K, remove the largest element
		if (pq.size() > K)
			pq.pop();
	}

	// Return the Kth smallest element (top of the max heap)
	return pq.top();
}

// Driver's code:
int main()
{
	int N = 10;
	int arr[N] = { 10, 5, 4, 3, 48, 6, 2, 33, 53, 10 };
	int K = 4;

	// Function call
	cout << "Kth Smallest Element is: "
		<< kthSmallest(arr, N, K);
}

3 2 4 1 5

Time Complexity: O(N * log(K)), The approach efficiently maintains a container of the K smallest elements while iterating through the array, ensuring a time complexity of O(N * log(K)), where N is the number of elements in the array.

Auxiliary Space: O(K)

kth largest:
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto&it:nums)
        {
            pq.push(it);
            if(pq.size() > k)
                pq.pop();
        }

        return pq.top();

    }
};