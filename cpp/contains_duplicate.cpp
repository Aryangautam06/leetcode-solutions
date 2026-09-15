// ======================================
// LeetCode Problem: contains duplicate
// Language: cpp
// Link: https://leetcode.com/problems/contains-duplicate/
// Synced by: LinkCode
// Date: 15/09/2026, 19:24:35
// ======================================


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set <int> seen;
        for(int num:nums){
            if(seen.count(num)){
                return true;
            }

            seen.insert(num);
        }

        return false;
    }
};