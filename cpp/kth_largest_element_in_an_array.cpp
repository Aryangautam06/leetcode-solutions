// ======================================
// LeetCode Problem: kth largest element in an array
// Language: cpp
// Link: https://leetcode.com/problems/kth-largest-element-in-an-array/
// Synced by: LinkCode
// Date: 25/08/2026, 23:13:25
// ======================================


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[n-k];
    }
};