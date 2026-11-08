// ======================================
// LeetCode Problem: number of 1 bits
// Language: cpp
// Link: https://leetcode.com/problems/number-of-1-bits/
// Synced by: LinkCode
// Date: 08/11/2026, 09:24:56
// ======================================


class Solution {
public:
    int hammingWeight(int n) {
        return __builtin_popcount(n);
    }
};