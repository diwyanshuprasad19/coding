2149. Rearrange Array Elements by Sign
work on it:
Time:
Space:

https://leetcode.com/problems/rearrange-array-elements-by-sign/solutions/4723827/interview-approach-follow-up-question/
interview approach:

2 solution there :
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        int pos = 0, neg = 1;
        for(int i = 0; i < n; ++i) {
            if(nums[i] >= 0) {
                ans[pos] = nums[i];
                pos += 2;
            }
            else {
                ans[neg] = nums[i];
                neg += 2;
            }
        }
        return ans;
    }
};

**** when order not needed:
class Solution {
    public int[] rearrangeArray(int[] nums) {
        int n = nums.length;
        int pos = 0, neg = 1;
        while(pos < n && neg < n) {
            if(nums[pos] >= 0) pos += 2;
            else if(nums[neg] < 0) neg += 2;
            else {
                int temp = nums[pos];
                nums[pos] = nums[neg];
                nums[neg] = temp;
            }
        }
        return nums;
    }
}

