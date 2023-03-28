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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp1=head;
        ListNode* temp2=head->next;
        ListNode* t3=head->next;
       cout<<t3->val;
        while(temp1->next!=NULL && temp2->next!=NULL ){
            temp1->next=temp2->next;
            temp1=temp1->next;
            temp2->next=temp1->next;
            temp2=temp2->next;
        }
        cout<<t3->val;
        temp1->next=t3;
        
        return head;
        
    }
};