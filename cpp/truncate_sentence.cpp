// ======================================
// LeetCode Problem: truncate sentence
// Language: cpp
// Link: https://leetcode.com/problems/truncate-sentence/
// Synced by: LinkCode
// Date: 24/09/2026, 16:46:13
// ======================================


class Solution {
public:
    string truncateSentence(string s, int k) {
        int n = s.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == ' ') {
                count++;

                if (count == k) {
                    return s.substr(0, i);
                }
            }
        }

        return s;
    }
};