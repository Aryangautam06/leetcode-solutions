// ======================================
// LeetCode Problem: number of employees who met the target
// Language: cpp
// Link: https://leetcode.com/problems/number-of-employees-who-met-the-target/
// Synced by: LinkCode
// Date: 10/10/2026, 21:09:42
// ======================================


class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;

        for(int i = 0; i < hours.size(); i++) {
            if(hours[i] >= target) {
                count++;
            }
        }

        return count;
    }
};