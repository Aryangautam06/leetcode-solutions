// ======================================
// LeetCode Problem: factorial trailing zeroes
// Language: cpp
// Link: https://leetcode.com/problems/factorial-trailing-zeroes/
// Synced by: LinkCode
// Date: 26/08/2026, 11:41:31
// ======================================


class Solution {
public:
    int trailingZeroes(int n) {
       int zero = 0;

        while (n > 0) {
            n /= 5;
            zero += n;
        }

        return zero;
    }
};