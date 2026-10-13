// ======================================
// LeetCode Problem: difference between element sum and digit sum of an array
// Language: cpp
// Link: https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/
// Synced by: LinkCode
// Date: 13/10/2026, 09:25:22
// ======================================


class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;

        for(int i = 0; i < nums.size(); i++) {
            elementSum += nums[i];

            int num = nums[i];

            while(num > 0) {
                digitSum += num % 10;
                num /= 10;
            }
        }

        return abs(elementSum - digitSum);
    }
};