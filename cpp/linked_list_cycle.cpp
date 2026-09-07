// ======================================
// LeetCode Problem: linked list cycle
// Language: cpp
// Link: https://leetcode.com/problems/linked-list-cycle/
// Synced by: LinkCode
// Date: 07/09/2026, 16:41:49
// ======================================


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast=head;
        ListNode *slow=head;
        while(fast != NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};