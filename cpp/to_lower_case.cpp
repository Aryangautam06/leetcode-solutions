// ======================================
// LeetCode Problem: to lower case
// Language: cpp
// Link: https://leetcode.com/problems/to-lower-case/
// Synced by: LinkCode
// Date: 27/08/2026, 22:45:39
// ======================================


class Solution {
public:
    string toLowerCase(string s) {
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]>='A'&&s[i]<='Z'){
                s[i]=s[i]+32;
            }
            else{
                s[i]=s[i];
            }
        }
        return s;
    }
    
};