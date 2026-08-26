// ======================================
// LeetCode Problem: squares of a sorted array
// Language: cpp
// Link: https://leetcode.com/problems/squares-of-a-sorted-array/
// Synced by: LinkCode
// Date: 26/08/2026, 16:16:50
// ======================================


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
            for(int i=0;i<n;i++){
                nums[i]=nums[i]*nums[i];
                
            }
            for(int i=1;i<n;i++){
                int j=i-1;
                int key=nums[i];
                while(j>=0 && key<nums[j]){
                    nums[j+1]=nums[j];
                    j--;
                }
                nums[j+1]=key;
            }
            return nums;
        
    }
};