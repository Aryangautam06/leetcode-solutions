// ======================================
// LeetCode Problem: defanging an ip address
// Language: cpp
// Link: https://leetcode.com/problems/defanging-an-ip-address/
// Synced by: LinkCode
// Date: 22/09/2026, 00:27:38
// ======================================


class Solution {
public:
    string defangIPaddr(string address) {
     int n=address.size();
     string s;
     
        for(int i=0;i<n;i++){
            if(address[i]=='.'){
                s+="[.]";
            }
            else{
                s+=address[i];
            }

            
        }
        return s;
      
    }
};