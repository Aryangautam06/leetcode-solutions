// ======================================
// LeetCode Problem: search in rotated sorted array
// Language: cpp
// Link: https://leetcode.com/problems/search-in-rotated-sorted-array/
// Synced by: LinkCode
// Date: 27/10/2026, 21:58:30
// ======================================


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target) return mid;

            if(nums[mid]>=nums[low]){
                if(nums[low]<=target && target<nums[mid]){  //nums[low]<=target<=nums[mid] this is wrong cpp doesn't tell you is this target is lies b/w this and that it tell (num[low]<=target) gives T or F then compare with nums[mid]
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(nums[mid]<target&& target<=nums[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};