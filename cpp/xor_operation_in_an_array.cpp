// ======================================
// LeetCode Problem: xor operation in an array
// Language: cpp
// Link: https://leetcode.com/problems/xor-operation-in-an-array/
// Synced by: LinkCode
// Date: 21/09/2026, 14:05:57
// ======================================


class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n];
        for(int i=0;i<n;i++){
            nums[i]=start+2*i;
        }
        int ans=nums[0];
        for(int i=1;i<n;i++){
            ans=ans^nums[i];
        }
        return ans;

        
    }
};