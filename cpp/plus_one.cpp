// ======================================
// LeetCode Problem: plus one
// Language: cpp
// Link: https://leetcode.com/problems/plus-one/
// Synced by: LinkCode
// Date: 30/10/2026, 10:05:47
// ======================================


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        for(int i=n;i>=0;i--){
            if(digits[i]<9){
                digits[i]+=1;
                return digits;
            }
            digits[i]=0;
        }
        digits.insert(digits.begin(), 1);

        return digits;
    }
};