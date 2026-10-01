// ======================================
// LeetCode Problem: perfect number
// Language: cpp
// Link: https://leetcode.com/problems/perfect-number/
// Synced by: LinkCode
// Date: 01/10/2026, 23:22:31
// ======================================


class Solution {
public:
    bool checkPerfectNumber(int num) {
        // int n=0;
        // for(int i=1;i<num;i++){
        //     if(num%i==0){
        //         n=n+i;
        //     }
        // }
        // return(n==num);

        int sum=1;
        if (num <= 1) {
                return false;
            }
        for(int i=2;i*i<num;i++){
            
            if(num%i==0){
                if(i*i==num){
                    sum+=i;
                }
                else{
                sum+=i+num/i;
                }
            }
            
        }
        return (sum==num);
        
    }
};