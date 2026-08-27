// ======================================
// LeetCode Problem: valid palindrome
// Language: cpp
// Link: https://leetcode.com/problems/valid-palindrome/
// Synced by: LinkCode
// Date: 27/08/2026, 22:38:38
// ======================================


class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {

            if (!isalnum(s[left])) {
                left++;
                continue;
            }

            if (!isalnum(s[right])) {
                right--;
                continue;
            }

            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};