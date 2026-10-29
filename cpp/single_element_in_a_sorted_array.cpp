// ======================================
// LeetCode Problem: single element in a sorted array
// Language: cpp
// Link: https://leetcode.com/problems/single-element-in-a-sorted-array/
// Synced by: LinkCode
// Date: 29/10/2026, 19:08:53
// ======================================


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=nums.size();
        // int ans=0;
        // if(l==1) ans = nums[0];
        // for(int i=0;i<l;i++){
        //     if(i==0){
        //         if(nums[i]!=nums[i+1]) ans = nums[i];
        //     }
        //     else if(i==l-1){
        //         if(nums[i]!=nums[i-1]) ans =  nums[i];
        //     }
        //     else if(nums[i]!=nums[i+1] && nums[i]!=nums[i-1]){
        //         ans = nums[i];
        //     }
        // }
        // return ans;
        if(l==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[l-1]!=nums[l-2]) return nums[l-1];
        int low=1;
        int high=l-2;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid];
            else if(mid%2!=0 && nums[mid]==nums[mid-1] || mid%2==0 && nums[mid]==nums[mid+1]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};