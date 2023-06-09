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
    ListNode* rev(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        
        ListNode *newhead=rev(head->next);
        head->next->next=head;
        head->next=NULL;
        
        return newhead;
        
        
    }
    
    bool isPalindrome(ListNode* head) {
        
        //finding the middle of linked list using slow and fast pointer approach
         if(head==NULL || head->next==NULL) return true;
        
        ListNode *slow=head,*fast=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=rev(slow->next);
        slow=slow->next;
        fast=head;
        cout<<slow->val;
       while(slow != NULL){
            if(slow->val != head->val) return false;
            slow = slow->next;
            head = head->next;
        }

        
            return true;
        
        
        
        
    }
};