// ======================================
// LeetCode Problem: reverse words in a string
// Language: cpp
// Link: https://leetcode.com/problems/reverse-words-in-a-string/
// Synced by: LinkCode
// Date: 17/09/2026, 21:14:36
// ======================================


class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> v;
        string w;

        while (ss >> w) {
            v.push_back(w);
        }

        string ans = "";

        for (int i = v.size() - 1; i >= 0; i--) {
            ans += v[i];

            if (i != 0) {
                ans += " ";
            }
        }

        return ans;
       
    }
};