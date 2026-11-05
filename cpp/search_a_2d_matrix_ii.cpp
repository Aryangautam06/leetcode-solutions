// ======================================
// LeetCode Problem: search a 2d matrix ii
// Language: cpp
// Link: https://leetcode.com/problems/search-a-2d-matrix-ii/
// Synced by: LinkCode
// Date: 05/11/2026, 16:32:28
// ======================================


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int i=0;
        int j=c-1;
        while(i<r && j>=0){
            if(matrix[i][j]==target)return true;
            else if(matrix[i][j]<target)i++;
            else if(matrix[i][j]>target)j--;
        }
        return false; 
    }
};