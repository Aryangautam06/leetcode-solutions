// ======================================
// LeetCode Problem: harshad number
// Language: cpp
// Link: https://leetcode.com/problems/harshad-number/
// Synced by: LinkCode
// Date: 17/10/2026, 09:02:27
// ======================================


class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
       int n = x;
        int sum = 0;

        while(n > 0) {
            sum += n % 10;
            n /= 10;
        }

        if(x % sum == 0) {
            return sum;
        }

        return -1; 
    }
};