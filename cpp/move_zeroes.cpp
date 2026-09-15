// ======================================
// LeetCode Problem: move zeroes
// Language: cpp
// Link: https://leetcode.com/problems/move-zeroes/
// Synced by: LinkCode
// Date: 15/09/2026, 19:09:19
// ======================================


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int z=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[z]=nums[i];
                z++;
            }

        }
        for(int i=z;i<n;i++){
            nums[i]=0;
        }
        
    }
};