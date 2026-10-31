// ======================================
// LeetCode Problem: remove outermost parentheses
// Language: cpp
// Link: https://leetcode.com/problems/remove-outermost-parentheses/
// Synced by: LinkCode
// Date: 31/10/2026, 20:04:29
// ======================================


class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                count++;
                if(count>1) ans+='(';
            }
            else if(s[i]==')'){
                count--;
                if(count>0) ans+=')';
            }
        }
        return ans;
    }
};