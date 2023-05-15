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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode **a = &head;
while (--k) { a = &(*a)->next; }
ListNode **b = &head, **x = &(*a)->next;
while (*x) { x = &(*x)->next; b = &(*b)->next; }
swap(*a, *b);
swap((*a)->next, (*b)->next);
return head;
    }
};