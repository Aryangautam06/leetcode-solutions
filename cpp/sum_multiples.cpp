// ======================================
// LeetCode Problem: sum multiples
// Language: cpp
// Link: https://leetcode.com/problems/sum-multiples/
// Synced by: LinkCode
// Date: 29/09/2026, 10:20:05
// ======================================


class Solution {
public:
    int sumOfMultiples(int n) {
        int sum = 0;

        for(int i = 1; i <= n; i++) {
            if(i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
                sum += i;
            }
        }

        return sum;
    }
};