// ======================================
// LeetCode Problem: ransom note
// Language: cpp
// Link: https://leetcode.com/problems/ransom-note/
// Synced by: LinkCode
// Date: 04/10/2026, 14:51:17
// ======================================


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size() > magazine.size()) {
            return false;
        }

        int freq[26] = {0};

        for(int i = 0; i < magazine.size(); i++) {
            freq[magazine[i] - 'a']++;
        }

        for(int i = 0; i < ransomNote.size(); i++) {
            freq[ransomNote[i] - 'a']--;

            if(freq[ransomNote[i] - 'a'] < 0) {
                return false;
            }
        }

        return true;
    }
};