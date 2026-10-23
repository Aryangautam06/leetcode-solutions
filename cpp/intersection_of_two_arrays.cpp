// ======================================
// LeetCode Problem: intersection of two arrays
// Language: cpp
// Link: https://leetcode.com/problems/intersection-of-two-arrays/
// Synced by: LinkCode
// Date: 23/10/2026, 18:13:25
// ======================================


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // unordered_set<int> nm1;
        // for(int i=0;i<nums1.size();i++){
        //     nm1.insert(nums1[i]);
        // }
        // vector<int> arr;
        // for(int i=0;i<nums2.size();i++){
        //     if (nm1.count(nums2[i])){
        //         arr.push_back(nums2[i]);
        //         nm1.erase(nums2[i]);
        //     }
        // }
        // return arr;

        if(nums1.size() > nums2.size()) {
            return intersection(nums2, nums1);
        }

        unordered_set<int> seen;

        for(int i = 0; i < nums1.size(); i++) {
            seen.insert(nums1[i]);
        }

        vector<int> ans;

        for(int i = 0; i < nums2.size(); i++) {
            if(seen.count(nums2[i])) {
                ans.push_back(nums2[i]);
                seen.erase(nums2[i]);
            }
        }

        return ans;
    }
};