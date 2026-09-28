// ======================================
// LeetCode Problem: smallest even multiple
// Language: cpp
// Link: https://leetcode.com/problems/smallest-even-multiple/
// Synced by: LinkCode
// Date: 28/09/2026, 07:50:49
// ======================================


class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n % 2 == 0) {
            return n;
        }

        return n * 2;
    }
};