// ======================================
// LeetCode Problem: rotate image
// Language: cpp
// Link: https://leetcode.com/problems/rotate-image/
// Synced by: LinkCode
// Date: 11/09/2026, 14:31:50
// ======================================


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> trpsrev(n,vector<int>(n));


        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                trpsrev[i][j]=matrix[j][i];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=n-1;j>=0;j--){
                matrix[i][j]=trpsrev[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=n-1;j>=0;j--){
                matrix[i][j]=trpsrev[i][j];
            }
        } 
        for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
    }
};