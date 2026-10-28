// ======================================
// LeetCode Problem: find minimum in rotated sorted array
// Language: cpp
// Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
// Synced by: LinkCode
// Date: 28/10/2026, 23:06:09
// ======================================


class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans=INT_MAX;
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=nums[low]){
                ans=min(ans,nums[low]);
                low=mid+1;
            }
            else{
                ans=min(ans,nums[mid]);
                high=mid-1;
            }
        }
        return ans;
    }
};