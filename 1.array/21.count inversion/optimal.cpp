class Solution {
public:
    int merge(vector<int>& nums,int left, int mid, int right){
        int count=0;
        vector<int> v;
        int i=left,j=mid+1,k=left;
        while(i<=mid && j<=right){
            if(nums[i]<=nums[j]){
                v.push_back(nums[i++]);
            }
            else{
                v.push_back(nums[j++]);
                count+=(mid-left+1);
            }
        }
        while(i<=mid){
            v.push_back(nums[i++]);
        }
        while(j<=right){
            v.push_back(nums[j++]);
        }
        for(int i=left;i<=right;i++){
            nums[i]=v[i-left];
        }
        return count;
    } 
    int mergesort(vector<int>& nums,int left, int right){
        int ic=0;
        if(left<right){
            int mid = (left+right)/2;
            ic+=mergesort(nums,left,mid);
            ic+=mergesort(nums,mid+1,right);
            ic+=merge(nums,left,mid,right);
        }
        return ic;
    } 
    vector<int> countSmaller(vector<int>& nums) {
       int ans =  mergesort(nums,0,nums.size()-1);
       vector<int> v;
       v.push_back(ans);
       return v;
    }
};
time:nlogn
space:n
//https://medium.com/@kapoorprakhar99/count-inversion-in-an-array-using-merge-sort-f8b66e2a5436#:~:text=Count%20Inversions%20%7C%20Practice%20%7C%20GeeksforGeeks&text=If%20array%20is%20already%20sorted,j%5D%20and%20i%20%3C%20j.

https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1?source=post_page-----f8b66e2a5436--------------------------------
