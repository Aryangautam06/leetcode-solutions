// ======================================
// LeetCode Problem: reverse degree of a string
// Language: cpp
// Link: https://leetcode.com/problems/reverse-degree-of-a-string/
// Synced by: LinkCode
// Date: 14/11/2026, 22:18:51
// ======================================


class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            int rev = 26-(s[i]-'a');
            ans=ans+(rev*(i+1)); 
        }
        return ans;
    }
};