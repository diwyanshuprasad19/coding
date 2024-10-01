ques:https://leetcode.com/problems/subarray-sum-equals-k/description/

explain:https://medium.com/@sakalli.duran/sums-and-subarrays-decoding-leetcodes-subarray-sum-equals-k-conundrum-08c09eb43ad0

The prefix sum approach is a powerful technique used to efficiently calculate the sum of elements in a subarray. The main idea is to preprocess an array such that you can answer range sum queries in constant time after an initial linear time preprocessing step. Here’s a detailed explanation and implementation in C++:

Step-by-Step Explanation
Define the Prefix Sum Array:

Create an auxiliary array prefixSum where prefixSum[i] will store the sum of the array elements from the start up to the index i.
Construct the Prefix Sum Array:

Initialize the first element of prefixSum as the first element of the original array.
For each subsequent element, set prefixSum[i] as prefixSum[i-1] + arr[i].

leetcode explaination:https://leetcode.com/problems/subarray-sum-equals-k/solutions/1759909/c-full-explained-every-step-w-dry-run-o-n-2-o-n-two-approaches/

class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size(); // take the size of the array
        
        int prefix[n]; // make a prefix array to store prefix sum
        
        prefix[0] = arr[0]; // for element at index at zero, it is same
        
        // making our prefix array
        for(int i = 1; i < n; i++)
        {
            prefix[i] = arr[i] + prefix[i - 1];
        }
        
        unordered_map<int,int> mp; // declare an unordered map
        
        int ans = 0; // to store the number of our subarrays having sum as 'k'
        
        for(int i = 0; i < n; i++) // traverse from the prefix array
        {
            if(prefix[i] == k) // if it already becomes equal to k, then increment ans
                ans++;
            
            // now, as we discussed find whether (prefix[i] - k) present in map or not
            if(mp.find(prefix[i] - k) != mp.end())
            {
                ans += mp[prefix[i] - k]; // if yes, then add it our answer
            }
            
            mp[prefix[i]]++; // put prefix sum into our map
        }
        
        return ans; // and at last, return our answer
    }
};

Time Complexity --> O(n) // where n is the size of the array
Space Complexity --> O(n) // we are using unordered map from our side
It paases [ 89 / 89 ] in built test cases

