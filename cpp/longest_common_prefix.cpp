// ======================================
// LeetCode Problem: longest common prefix
// Language: cpp
// Link: https://leetcode.com/problems/longest-common-prefix/
// Synced by: LinkCode
// Date: 12/09/2026, 18:44:47
// ======================================


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int ind=0;
        for (int i = 0; i < strs[0].size(); i++) {

            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].size() || strs[j][i] != strs[0][i]) {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
        
    }
};