// ======================================
// LeetCode Problem: find words containing character
// Language: cpp
// Link: https://leetcode.com/problems/find-words-containing-character/
// Synced by: LinkCode
// Date: 24/09/2026, 19:16:36
// ======================================


class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int n=words.size();
        for(int i=0;i<n;i++){
            int m=words[i].size();
            for(int j=0;j<m;j++){
                if(words[i][j]==x){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};