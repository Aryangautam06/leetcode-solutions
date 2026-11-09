// ======================================
// LeetCode Problem: sum of beauty of all substrings
// Language: cpp
// Link: https://leetcode.com/problems/sum-of-beauty-of-all-substrings/
// Synced by: LinkCode
// Date: 09/11/2026, 20:37:56
// ======================================


class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            int freq[26]={0};
            for(int j=i;j<s.size();j++){
                freq[s[j]-'a']++;
                int maxchar=0;
                int minchar=INT_MAX;
                for(int k=0;k<26;k++){
                    if(freq[k]>0){
                        maxchar=max(maxchar,freq[k]);
                        minchar=min(minchar,freq[k]);
                    }
                }
                sum=sum+(maxchar-minchar);
            }
        }
        return sum;
    }
};