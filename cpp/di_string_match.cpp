// ======================================
// LeetCode Problem: di string match
// Language: cpp
// Link: https://leetcode.com/problems/di-string-match/
// Synced by: LinkCode
// Date: 13/11/2026, 23:16:57
// ======================================


class Solution {
public:
    vector<int> diStringMatch(string s) {
        int low=0;
        int high=s.size();
        vector<int>ans;
        for(int i=0;i<s.size();i++){
            if(s[i]=='I'){ //Next number > Previous number that Y we choose lowest in all
                ans.push_back(low);
                low++;
                
            }
            else{
                ans.push_back(high); //Next number < Previous number that Y we choose highest in all
                high--;
            }
        }
        ans.push_back(low);
        return ans;
    }
};