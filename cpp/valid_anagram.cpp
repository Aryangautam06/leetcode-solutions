// ======================================
// LeetCode Problem: valid anagram
// Language: cpp
// Link: https://leetcode.com/problems/valid-anagram/
// Synced by: LinkCode
// Date: 05/09/2026, 19:15:39
// ======================================


class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        int count[26] = {0};
        for (int i = 0; i < s.size(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                return false;
            }
        }

        return true;
        
    }
};