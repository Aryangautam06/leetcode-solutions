// ======================================
// LeetCode Problem: kids with the greatest number of candies
// Language: cpp
// Link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
// Synced by: LinkCode
// Date: 23/09/2026, 10:31:25
// ======================================


class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int n=candies.size();
        int max=candies[0];
        for(int i=0;i<n;i++){
                if(max<candies[i]){
                    max=candies[i];
                }
        }

        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=max){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }

    return result;
    }
};