// ======================================
// LeetCode Problem: 3sum closest
// Language: cpp
// Link: https://leetcode.com/problems/3sum-closest/
// Synced by: LinkCode
// Date: 18/11/2026, 22:48:57
// ======================================


class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int closetsum=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(sum-target)<abs(closetsum-target)){
                    closetsum=sum;
                }
                if(sum<target)j++;
                else if(sum>target) k--;
                else return sum;
            }
        }
        return closetsum;
    }
};