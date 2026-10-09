// ======================================
// LeetCode Problem: score of a string
// Language: cpp
// Link: https://leetcode.com/problems/score-of-a-string/
// Synced by: LinkCode
// Date: 09/10/2026, 21:12:34
// ======================================


class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;

        for(int i = 0; i < s.size() - 1; i++) {
            sum += abs(s[i] - s[i + 1]);
        }

        return sum;
    }
};