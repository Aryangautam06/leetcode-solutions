// ======================================
// LeetCode Problem: richest customer wealth
// Language: cpp
// Link: https://leetcode.com/problems/richest-customer-wealth/
// Synced by: LinkCode
// Date: 16/09/2026, 14:54:27
// ======================================


class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        int  n=accounts.size();
        int m=accounts[0].size();
        for(int i=0;i<n;i++){
            int wealth=0;
            for(int j=0;j<m;j++){
                wealth+=accounts[i][j];
            }
            if(wealth>max){
                max=wealth;
            }
        }
        return max;    
    }
};