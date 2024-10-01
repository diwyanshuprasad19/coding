vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i=0,j=0;
        vector<int> ans;
        while(i<nums1.size() && j<nums2.size())
        {
            if(i>0 && nums1[i-1]==nums1[i])
            {
                i++;
                continue;
            }
            if(nums1[i]<nums2[j])
            {
                i++;
            }
            else if(nums1[i]>nums2[j])
            {
                j++;
            }
            else
            {
                ans.push_back(nums1[i]);
                i++;j++;
            }
        }
        return ans;
    }
Time complexity:
the overall time complexity is dominated by the sorting operations, resulting in O(n log n), where 'n' is the size of the larger array between nums1 and nums2.

Space complexity:
the overall space complexity of the given function is O(1) for sorting and O(min(m, n)) for the output vector, and in big O notation, it is often simplified to O(min(m, n)).