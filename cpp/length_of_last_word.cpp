// ======================================
// LeetCode Problem: length of last word
// Language: cpp
// Link: https://leetcode.com/problems/length-of-last-word/
// Synced by: LinkCode
// Date: 03/09/2026, 22:38:21
// ======================================


class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0;
        int i=s.size()-1;
        while(i>=0 and s[i]==' '){
            i--;
        }
        while(i>=0 and s[i]!=' '){
            len=len+1;
            i--;
        }
        return len;

        
        
    }
};