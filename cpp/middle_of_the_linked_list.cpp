// ======================================
// LeetCode Problem: middle of the linked list
// Language: cpp
// Link: https://leetcode.com/problems/middle-of-the-linked-list/
// Synced by: LinkCode
// Date: 08/09/2026, 23:29:31
// ======================================


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // int count=0;
        // ListNode *temp=head;
        // while(temp!=NULL){
        //     temp=temp->next;
        //     count++;
        // }
        
        // temp=head;
        // for(int i=0;i<count/2;i++){
            
        //     temp=temp->next;
        // }
        // return temp;


        ListNode *fast=head;
        ListNode *slow=head;
        

        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;

        }
        return slow;

        
    }
};