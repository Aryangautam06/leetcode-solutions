// ======================================
// LeetCode Problem: reverse string
// Language: cpp
// Link: https://leetcode.com/problems/reverse-string/
// Synced by: LinkCode
// Date: 27/08/2026, 21:47:42
// ======================================


class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        //while loop lagana hai
        int i=0;
        int j=n-1;
        while(i<j){
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;

        }
        }
};