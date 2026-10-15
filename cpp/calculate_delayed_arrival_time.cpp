// ======================================
// LeetCode Problem: calculate delayed arrival time
// Language: cpp
// Link: https://leetcode.com/problems/calculate-delayed-arrival-time/
// Synced by: LinkCode
// Date: 15/10/2026, 19:04:08
// ======================================


class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        return (arrivalTime + delayedTime) % 24;
    }
};