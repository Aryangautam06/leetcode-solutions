// ======================================
// LeetCode Problem: house robber
// Language: cpp
// Link: https://leetcode.com/problems/house-robber/
// Synced by: LinkCode
// Date: 10/09/2026, 23:35:20
// ======================================


class Solution {
public:
    int rob(vector<int>& nums) {
        int prev2 = 0;
        int prev1 = 0;

        for (int i = 0; i < nums.size(); i++) {
            int take = nums[i] + prev2;
            int skip = prev1;

            int current = max(take, skip);

            prev2 = prev1;
            prev1 = current;
        }

        return prev1;
    }
};