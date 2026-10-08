// ======================================
// LeetCode Problem: a number after a double reversal
// Language: cpp
// Link: https://leetcode.com/problems/a-number-after-a-double-reversal/
// Synced by: LinkCode
// Date: 08/10/2026, 19:12:25
// ======================================


class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num == 0) {
            return true;
        }

        return num % 10 != 0;
    }
};