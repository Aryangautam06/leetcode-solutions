// ======================================
// LeetCode Problem: maximum nesting depth of the parentheses
// Language: cpp
// Link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
// Synced by: LinkCode
// Date: 01/11/2026, 17:02:33
// ======================================


class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int mcount=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                count++;
                mcount=max(mcount,count);
            }
            else if(s[i]==')'){
                count--;
            }
        }
        return mcount;
    }
};