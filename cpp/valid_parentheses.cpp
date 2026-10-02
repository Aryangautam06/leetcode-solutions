// ======================================
// LeetCode Problem: valid parentheses
// Language: cpp
// Link: https://leetcode.com/problems/valid-parentheses/
// Synced by: LinkCode
// Date: 02/10/2026, 17:29:18
// ======================================


class Solution {
public:
    bool isValid(string s) {
        stack<char> c;
        int n = s.size();

        for(int i = 0; i < n; i++) {

            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                c.push(s[i]);
            }

            else {
                if(c.empty()) {
                    return false;
                }

                if(s[i] == ')') {
                    if(c.top() == '(') {
                        c.pop();
                    }
                    else {
                        return false;
                    }
                }

                else if(s[i] == ']') {
                    if(c.top() == '[') {
                        c.pop();
                    }
                    else {
                        return false;
                    }
                }

                else if(s[i] == '}') {
                    if(c.top() == '{') {
                        c.pop();
                    }
                    else {
                        return false;
                    }
                }
            }
        }

        return c.empty();
    }
};