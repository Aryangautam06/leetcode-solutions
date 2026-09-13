// ======================================
// LeetCode Problem: lucky numbers in a matrix
// Language: cpp
// Link: https://leetcode.com/problems/lucky-numbers-in-a-matrix/
// Synced by: LinkCode
// Date: 13/09/2026, 22:59:42
// ======================================


class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> result;
        
        for(int i=0;i<m;i++){
            int min=matrix[i][0];
            int col=0;
            for(int j=0;j<n;j++){
             if(matrix[i][j]<min){
                min=matrix[i][j];
                col=j;
                }  
            }
            int maxi=1;
            int max=matrix[i][col];
            for(int i=0;i<m;i++){
                if(max<matrix[i][col]){
                maxi=0;
    
                }
            } 
            if(maxi==1){
              result.push_back(max);
            } 

            
        }
        return result;

    }
};