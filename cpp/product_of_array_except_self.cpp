// ======================================
// LeetCode Problem: product of array except self
// Language: cpp
// Link: https://leetcode.com/problems/product-of-array-except-self/
// Synced by: LinkCode
// Date: 04/10/2026, 22:51:51
// ======================================


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int left=1;
        int right=1;
        ans[0]=left;
        for(int i=1;i<n;i++){
            left=nums[i-1]*left;
            ans[i]=left;
        }
        for(int i=n-2;i>=0;i--){
            right*=nums[i+1];
            ans[i]*=right;
        }
        return ans;

    }
};