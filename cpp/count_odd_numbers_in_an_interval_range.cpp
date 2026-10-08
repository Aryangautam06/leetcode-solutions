// ======================================
// LeetCode Problem: count odd numbers in an interval range
// Language: cpp
// Link: https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/
// Synced by: LinkCode
// Date: 08/10/2026, 18:55:14
// ======================================


class Solution {
public:
    int countOdds(int low, int high) {
       return (high + 1) / 2 - low / 2;
        
    }
};