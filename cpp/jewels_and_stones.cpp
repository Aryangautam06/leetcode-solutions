// ======================================
// LeetCode Problem: jewels and stones
// Language: cpp
// Link: https://leetcode.com/problems/jewels-and-stones/
// Synced by: LinkCode
// Date: 03/09/2026, 21:57:40
// ======================================


class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        int len=jewels.size();
        int len2=stones.size();
        for(int i=0;i<len2;i++){
            for(int j=0;j<len;j++){
                if(jewels[j]==stones[i]){
                    count++;
                }
            }
        }
        return count;
        
    }
};