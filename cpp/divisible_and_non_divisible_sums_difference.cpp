// ======================================
// LeetCode Problem: divisible and non divisible sums difference
// Language: cpp
// Link: https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/
// Synced by: LinkCode
// Date: 12/10/2026, 12:52:35
// ======================================


class Solution {
public:
    int differenceOfSums(int n, int m) {
       int num1 = 0;
        int num2 = 0;

        for(int i = 1; i <= n; i++) {
            if(i % m == 0) {
                num2 += i;
            }
            else {
                num1 += i;
            }
        }

        return num1 - num2; 
    }
};