// ======================================
// LeetCode Problem: minimum moves to equal array elements ii
// Language: cpp
// Link: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
// Synced by: LinkCode
// Date: 02/11/2026, 16:18:31
// ======================================


class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int  n=nums.size();
        sort(nums.begin(),nums.end());
        int median=nums[n/2];
        int moves=0;
        for(int i=0;i<n;i++){
            moves+=abs(nums[i]-median);
        }
        return moves;
        

    }
};