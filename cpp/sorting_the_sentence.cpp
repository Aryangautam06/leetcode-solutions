// ======================================
// LeetCode Problem: sorting the sentence
// Language: cpp
// Link: https://leetcode.com/problems/sorting-the-sentence/
// Synced by: LinkCode
// Date: 06/10/2026, 16:11:28
// ======================================


class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        string word;

        vector<string> ans(9);

        while(ss >> word) {
            int pos = word[word.size() - 1] - '0';

            word.pop_back();

            ans[pos - 1] = word;
        }

        string result = "";

        for(int i = 0; i < 9; i++) {
            if(ans[i] != "") {
                if(result != "") {
                    result += " ";
                }

                result += ans[i];
            }
        }

        return result;
    }
};