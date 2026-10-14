// ======================================
// LeetCode Problem: count the digits that divide a number
// Language: cpp
// Link: https://leetcode.com/problems/count-the-digits-that-divide-a-number/
// Synced by: LinkCode
// Date: 14/10/2026, 08:08:22
// ======================================


class Solution {
public:
    int countDigits(int num) {
        int n = num;
        int count = 0;

        while(n > 0) {
            int digit = n % 10;

            if(num % digit == 0) {
                count++;
            }

            n /= 10;
        }

        return count;
    }
};