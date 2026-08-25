// ======================================
// LeetCode Problem: palindrome number
// Language: cpp
// Link: https://leetcode.com/problems/palindrome-number/
// Synced by: LinkCode
// Date: 25/08/2026, 23:15:10
// ======================================


class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        int y;
        y=x;
        if(x<0){
            return false;
        }
        while(y!=0){
            rev=(rev*10)+(y%10);
            y/=10;
        }
        return x==rev;
        
    }
};