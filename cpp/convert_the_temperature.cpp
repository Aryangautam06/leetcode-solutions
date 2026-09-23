// ======================================
// LeetCode Problem: convert the temperature
// Language: cpp
// Link: https://leetcode.com/problems/convert-the-temperature/
// Synced by: LinkCode
// Date: 23/09/2026, 18:26:41
// ======================================


class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        double k=celsius + 273.15;
        double f=celsius*1.80+32.00;
        ans.push_back(k);
        ans.push_back(f);
        return ans;
    }
};