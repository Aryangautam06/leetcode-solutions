// ======================================
// LeetCode Problem: final value of variable after performing operations
// Language: cpp
// Link: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
// Synced by: LinkCode
// Date: 21/09/2026, 13:59:14
// ======================================


class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        int n=operations.size();

        for(int i=0;i<n;i++){
            if(operations[i]=="++X"||operations[i]=="X++"){
                x++;
            }
            else{
                x--;
            }
        }
        return x;
    }
};