// ======================================
// LeetCode Problem: find first palindromic string in the array
// Language: cpp
// Link: https://leetcode.com/problems/find-first-palindromic-string-in-the-array/
// Synced by: LinkCode
// Date: 25/09/2026, 14:17:18
// ======================================


class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
           //MY WAY 
        //     int left=0;
        //     int right=words[i].size()-1;
        //     string rev=words[i];
        //     while(left<right){
        //         swap(rev[left],rev[right]);
        //         left++;
        //         right--;
        //         }
        //         if(rev==words[i]){
        //             return words[i];
        //         }
        // }
        
        // return "";
            //OPTIMIZED

        int left = 0;
        int right = words[i].size() - 1;
        bool palindrome = true;
        while(left < right) {
            if(words[i][left] != words[i][right]) {
                palindrome = false;
                break;
            }

            left++;
            right--;
            }

            if(palindrome) {
                return words[i];
            }
        }

        return "";

    }
};