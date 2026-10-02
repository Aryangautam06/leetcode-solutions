// ======================================
// LeetCode Problem: spiral matrix
// Language: cpp
// Link: https://leetcode.com/problems/spiral-matrix/
// Synced by: LinkCode
// Date: 02/10/2026, 21:17:29
// ======================================


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int left=0;
        int right=n-1;
        int top=0;
        int bottom=m-1;
        vector<int> ans;

        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }


    return ans;
    }
};
// Initialize boundaries:
// left = 0, right = number of columns
// top = 0, bottom = number of rows

// While left < right AND top < bottom:
// a) Traverse top row from left → right

// Increment top
// b) Traverse right column from top → bottom
// Decrement right
// c) If boundaries still valid:
// Traverse bottom row from right → left
// Decrement bottom
// Traverse left column from bottom → top
// Increment left
// Continue until all layers are processed