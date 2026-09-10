// ======================================
// LeetCode Problem: transpose matrix
// Language: cpp
// Link: https://leetcode.com/problems/transpose-matrix/
// Synced by: LinkCode
// Date: 10/09/2026, 16:46:57
// ======================================


class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> trps(n, vector<int>(m));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                trps[j][i] = matrix[i][j];
            }
        }

        return trps;
    }
};