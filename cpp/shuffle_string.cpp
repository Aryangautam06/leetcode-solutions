// ======================================
// LeetCode Problem: shuffle string
// Language: cpp
// Link: https://leetcode.com/problems/shuffle-string/
// Synced by: LinkCode
// Date: 24/09/2026, 15:51:19
// ======================================


class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=s.size();

        string t(n,' ');
        for(int i=0;i<n;i++){
            t[indices[i]]=s[i];
        }
    return t;
    }
};