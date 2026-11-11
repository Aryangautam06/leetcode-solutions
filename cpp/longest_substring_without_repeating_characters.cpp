// ======================================
// LeetCode Problem: longest substring without repeating characters
// Language: cpp
// Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
// Synced by: LinkCode
// Date: 11/11/2026, 20:58:17
// ======================================


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>ans;
        int j=0;
        int maxi=0;
        for(int i=0;i<s.size();i++){
            while(ans.count(s[i])){
                ans.erase(s[j]);
                j++;
            }
            ans.insert(s[i]);
            maxi=max(maxi,i+1-j);
        }
        return maxi;
    }
};