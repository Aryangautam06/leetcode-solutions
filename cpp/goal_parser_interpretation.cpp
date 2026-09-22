// ======================================
// LeetCode Problem: goal parser interpretation
// Language: cpp
// Link: https://leetcode.com/problems/goal-parser-interpretation/
// Synced by: LinkCode
// Date: 22/09/2026, 23:07:48
// ======================================


class Solution {
public:
    string interpret(string command) {
        string ans;
        int n=command.size();
        int i=0;
        while(i<n){
            if(command[i]=='(' &&command[i+1]=='a'){
                ans+="al";
                i+=4;
            }
            else if(command[i]=='('&& command[i+1]==')'){
                ans+="o";
                i+=2;
            }
            else{
                ans+="G";
                i++;
            }
        }
        return ans;
    }
};