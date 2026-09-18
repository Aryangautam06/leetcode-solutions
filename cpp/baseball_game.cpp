// ======================================
// LeetCode Problem: baseball game
// Language: cpp
// Link: https://leetcode.com/problems/baseball-game/
// Synced by: LinkCode
// Date: 18/09/2026, 11:04:31
// ======================================


class Solution {
public:
    int calPoints(vector<string>& operations) {
        int x=0;
        int n=operations.size();
        vector<int> record;

        for(int i=0;i<n;i++){
            if(operations[i]=="D"){
                record.push_back(2*record.back());
            }
            else if(operations[i]=="C"){
                record.pop_back();
            }
            else if(operations[i]=="+"){
                int last = record[record.size() - 1];
                int second_last = record[record.size() - 2];
                record.push_back(last + second_last);

            }
            else{
                record.push_back(stoi(operations[i]));
            }

            
        }
        int n2=record.size();
        for(int i=0;i<n2;i++){
            x+=record[i];
        }
        return x;
    }
};