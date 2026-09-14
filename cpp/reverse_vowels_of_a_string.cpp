// ======================================
// LeetCode Problem: reverse vowels of a string
// Language: cpp
// Link: https://leetcode.com/problems/reverse-vowels-of-a-string/
// Synced by: LinkCode
// Date: 14/09/2026, 16:24:02
// ======================================


class Solution {
public:
    string reverseVowels(string s) {
        int n=s.length();
        int left=0;
        int right=n-1;
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        while(left<right){
            while(left<right and vowels.count(s[left])!=1){
                left++;
            }
            while(left<right and vowels.count(s[right])!=1){
                right--;
            }
            if(left<right){
                char temp=s[left];
                s[left]=s[right];
                s[right]=temp;

            }
            left++;
            right--;
            
        }   
        return s;   
    }
};