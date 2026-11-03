// ======================================
// LeetCode Problem: longest consecutive sequence
// Language: cpp
// Link: https://leetcode.com/problems/longest-consecutive-sequence/
// Synced by: LinkCode
// Date: 03/11/2026, 20:59:25
// ======================================


// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if(nums.empty()){
//             return 0;
//         }
//         unordered_set<int> seen;
//         for(int i=0;i<nums.size();i++){
//             seen.insert(nums[i]);
//         }

//         int long_st=0;
//         int curr_st=0;
//         for(int i=1;i<seen.size();i++){
//             if(seen.count(seen[i-1])){
//                 curr_st++;
//                 if(curr_st>long_st){
//                     long_st=curr_st;
//                 }
//             }
//         }
//         return long_st;
//     }
// };

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        sort(nums.begin(), nums.end());

        int long_st = 1;
        int curr_st = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                continue;  // Skip duplicates
            }

            if (nums[i] == nums[i - 1] + 1) {
                curr_st++;
            } else {
                curr_st = 1;
            }

            if (curr_st > long_st) {
                long_st = curr_st;
            }
        }

        return long_st;
    }
};