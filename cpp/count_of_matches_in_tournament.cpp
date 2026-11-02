// ======================================
// LeetCode Problem: count of matches in tournament
// Language: cpp
// Link: https://leetcode.com/problems/count-of-matches-in-tournament/
// Synced by: LinkCode
// Date: 02/11/2026, 13:44:55
// ======================================


class Solution {
public:
    int numberOfMatches(int n) {
        int match=0;
        while(n>1){
            if(n%2==0){
                match+=n/2;
                n/=2;
                
            }
            else{
                match+=(n-1)/2;
                n=(n-1)/2+1;
            }
        }
        return match;
    }
};