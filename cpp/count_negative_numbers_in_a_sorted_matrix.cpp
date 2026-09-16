// ======================================
// LeetCode Problem: count negative numbers in a sorted matrix
// Language: cpp
// Link: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
// Synced by: LinkCode
// Date: 16/09/2026, 15:49:09
// ======================================


class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        int m=grid.size();
        int n=grid[0].size();
        int i=m-1;
        int j=0;
        while(i>=0 && j<n){
            if(grid[i][j]<0){
                count=count+ (n-j);
                i--;
            }
            else{
                j++;
            }
        }
        return count;
    }
};