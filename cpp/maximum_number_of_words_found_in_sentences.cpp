// ======================================
// LeetCode Problem: maximum number of words found in sentences
// Language: cpp
// Link: https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
// Synced by: LinkCode
// Date: 17/09/2026, 21:48:58
// ======================================


class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        for(int i=0;i<sentences.size();i++){
            int count=1;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j] == ' '){
                    count++;
                }
            }
            ans=max(ans,count);
        }
        return ans;
    }
};