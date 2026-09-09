// ======================================
// LeetCode Problem: intersection of two linked lists
// Language: cpp
// Link: https://leetcode.com/problems/intersection-of-two-linked-lists/
// Synced by: LinkCode
// Date: 09/09/2026, 10:54:25
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
         ListNode* p1 = headA;
        ListNode* p2 = headB;

        while (p1 != p2) {
            if (p1 == nullptr) {
                p1 = headB;
            } else {
                p1 = p1->next;
            }

            if (p2 == nullptr) {
                p2 = headA;
            } else {
                p2 = p2->next;
            }
        }

        return p1;

    }
};