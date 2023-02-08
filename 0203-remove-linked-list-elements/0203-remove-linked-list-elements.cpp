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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head==NULL) return head;
        ListNode *dummy=new ListNode(-1);
        
        dummy->next=head;
        
        
        ListNode* temp=dummy,*prev=NULL,*rem=NULL;
        
        while(temp!=NULL && temp->next!=NULL){
            
            if(temp->next->val==val){
                rem=temp->next;
                temp->next=rem->next;
                delete rem;
            }
            else{
               
                temp=temp->next;
            }
        }
        return dummy->next;
    }
};