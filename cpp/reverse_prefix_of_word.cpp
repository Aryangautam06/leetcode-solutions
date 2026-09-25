// ======================================
// LeetCode Problem: reverse prefix of word
// Language: cpp
// Link: https://leetcode.com/problems/reverse-prefix-of-word/
// Synced by: LinkCode
// Date: 25/09/2026, 13:46:52
// ======================================


class Solution {
public:
    string reversePrefix(string word, char ch) {
        int left=0;
        int right=0;
        int n=word.size();
        right=word.find(ch);
        // for(int i=0;i<n;i++){
        //     if(word[i]==ch){
        //         right=i;
        //         break;
        //     }
        // }
        while(left<right){
            swap(word[left],word[right]);
            left++;
            right--;
        }
        return word;

    }
};