// ======================================
// LeetCode Problem: container with most water
// Language: cpp
// Link: https://leetcode.com/problems/container-with-most-water/
// Synced by: LinkCode
// Date: 02/10/2026, 16:35:30
// ======================================


class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int mx=0;
        int ht,w;
        int curr;
        while(left<right){
            ht=min(height[left],height[right]);
            w=right-left;
            curr=ht*w;
            mx=max(curr,mx);
            if(height[left]<height[right]){
                left++;
            }
            else right--;
           
        }
        return mx;
        

    }
};