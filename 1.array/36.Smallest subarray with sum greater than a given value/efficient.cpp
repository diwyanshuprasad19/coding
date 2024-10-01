https://leetcode.com/problems/minimum-size-subarray-sum/solutions/3724542/c-beginner-friendly-solution-using-2-pointer-approach2-poi/
ques


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0;
        int sum=0;
        int mini=INT_MAX;

        while(j<nums.size())
        {
            sum+=nums[j];
            while(sum>=target)
            {
                mini=min(mini,j-i+1);
                sum=sum-nums[i];
                i++;
            }
            j++;
        } 
        if(mini==INT_MAX)  
        return 0;
        
        return mini;
    }
};
