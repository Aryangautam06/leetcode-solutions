// ======================================
// LeetCode Problem: minimum moves to equal array elements
// Language: cpp
// Link: https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
// Synced by: LinkCode
// Date: 02/11/2026, 16:37:28
// ======================================


class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int min = nums[0];
        int moves = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] < min) {
                min = nums[i];
            }
        }
        for (int i = 0; i < n; i++) {
            moves += nums[i] - min;
        }
        return moves;
    }
};