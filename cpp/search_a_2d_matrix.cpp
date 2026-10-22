// ======================================
// LeetCode Problem: search a 2d matrix
// Language: cpp
// Link: https://leetcode.com/problems/search-a-2d-matrix/
// Synced by: LinkCode
// Date: 22/10/2026, 23:03:40
// ======================================


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        // for(int i=0;i<r;i++){
        //     for(int j=0;j<c;j++){
        //         if(matrix[i][j]==target) return true;
        //     }
        // }
        // return false;
        int high=r*c-1; 
        int low=0;
        while(low<=high){
            int mid=(low+high)/2;
            int row=mid/c;
            int col=mid%c;
            if(matrix[row][col]==target) return true;
            else if(matrix[row][col]>target) high=mid-1;
            else if(matrix[row][col]<target) low=mid+1;
        }
        return false;
    }
};