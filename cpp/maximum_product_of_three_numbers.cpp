// ======================================
// LeetCode Problem: maximum product of three numbers
// Language: cpp
// Link: https://leetcode.com/problems/maximum-product-of-three-numbers/
// Synced by: LinkCode
// Date: 26/08/2026, 16:01:54
// ======================================


class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            int key=nums[i];
            int j=i-1;
            while(j>=0&& nums[j]>key){
                nums[j+1]=nums[j];
                j--;
            }
            nums[j+1]=key;
        }

        int p,np;
        
        p=nums[n-1]*nums[n-2]*nums[n-3];
        np=nums[0]*nums[1]*nums[n-1];
        if(p>np){
            return p;
        }
        else return np;
       
        
    }
};