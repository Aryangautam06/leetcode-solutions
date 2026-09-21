// ======================================
// LeetCode Problem: how many numbers are smaller than the current number
// Language: cpp
// Link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
// Synced by: LinkCode
// Date: 21/09/2026, 15:34:07
// ======================================


class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int> counter(n);

        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(nums[j]<nums[i]){
                    count++;
                }
            }
            counter[i]=count;
        }

        return counter;
    }
};