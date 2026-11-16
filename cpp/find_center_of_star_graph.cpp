// ======================================
// LeetCode Problem: find center of star graph
// Language: cpp
// Link: https://leetcode.com/problems/find-center-of-star-graph/
// Synced by: LinkCode
// Date: 16/11/2026, 16:38:46
// ======================================


class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        if (edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1]) {
            return edges[0][0];
        }
        return edges[0][1];
    }
};