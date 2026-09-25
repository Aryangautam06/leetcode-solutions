// ======================================
// LeetCode Problem: concatenation of array
// Language: cpp
// Link: https://leetcode.com/problems/concatenation-of-array/
// Synced by: LinkCode
// Date: 25/09/2026, 14:49:09
// ======================================


class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(2*n);
        for(int i=0;i<n;i++){
            ans[i]=nums[i];
            ans[n+i]=nums[i];
        }
        return ans;
        
    }
};