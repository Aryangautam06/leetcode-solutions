// ======================================
// LeetCode Problem: sqrtx
// Language: cpp
// Link: https://leetcode.com/problems/sqrtx/
// Synced by: LinkCode
// Date: 10/09/2026, 21:56:46
// ======================================


class Solution {
public:
    long long mySqrt(int x) {
        long long i=0;
        while(i*i<=x){
            i++;
        }
        return i-1;

        
    }
};