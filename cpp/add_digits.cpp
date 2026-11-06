// ======================================
// LeetCode Problem: add digits
// Language: cpp
// Link: https://leetcode.com/problems/add-digits/
// Synced by: LinkCode
// Date: 06/11/2026, 21:45:38
// ======================================


class Solution {
public:
    int addDigits(int num) {
        return num == 0 ? 0 : 1 + (num - 1) % 9;

    }
};