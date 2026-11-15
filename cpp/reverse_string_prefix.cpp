// ======================================
// LeetCode Problem: reverse string prefix
// Language: cpp
// Link: https://leetcode.com/problems/reverse-string-prefix/
// Synced by: LinkCode
// Date: 15/11/2026, 21:03:31
// ======================================


class Solution {
public:
    string reversePrefix(string s, int k) {
       reverse(s.begin(),s.begin()+k);
        return s; 
    }
};