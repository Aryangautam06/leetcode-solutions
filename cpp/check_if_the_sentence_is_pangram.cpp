// ======================================
// LeetCode Problem: check if the sentence is pangram
// Language: cpp
// Link: https://leetcode.com/problems/check-if-the-sentence-is-pangram/
// Synced by: LinkCode
// Date: 24/10/2026, 09:38:15
// ======================================


class Solution {
public:
    bool checkIfPangram(string sentence) {
        int ch[26]={0};
        int l=sentence.size();
        for(int i=0;i<l;i++){
            ch[sentence[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(ch[i]==0) return false;
        }
        return true;


        // unordered_set<int> seen;
        // for(int i=0;i<sentence.size();i++){
        //     if(seen.count(sentence[i]-'a')){
        //         continue;
        //     }
        //     else{
        //         seen.insert(sentence[i]-'a');
        //     }
        // }
        // return(seen.size()==26);
    }
};