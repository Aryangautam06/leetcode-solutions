// ======================================
// LeetCode Problem: sum of squares of special elements
// Language: cpp
// Link: https://leetcode.com/problems/sum-of-squares-of-special-elements/
// Synced by: LinkCode
// Date: 18/10/2026, 10:43:38
// ======================================


class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;

        for(int i = 0; i < n; i++) {
            if(n % (i + 1) == 0) {
                sum += nums[i] * nums[i];
            }
        }

        return sum;
    }
};