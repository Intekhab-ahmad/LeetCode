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
    ListNode *findmid(ListNode *head){
        ListNode *slow=head,*fast=head->next;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode *merge(ListNode *left,ListNode *right){
        
        
        
        
        ListNode *dummy=new ListNode(-1);
        ListNode *temp=dummy;
        
        while(left && right){
            if(left->val<right->val){
                temp->next=left;
                left=left->next;
            }
            else{
                temp->next=right;
                right=right->next;
            }
            temp=temp->next;
        }
        temp->next=left ? left : right;
        
        return dummy->next;
    }
    ListNode* sortList(ListNode* head) {
        
        if(head==NULL || head->next==NULL) return head;
        
        ListNode *mid=findmid(head);
        ListNode* left=head;
        ListNode *right=mid->next;
        mid->next=NULL;
        
        //recursive calls to sort the list
        left=sortList(left);
        right=sortList(right);
        
        //now merging both the sorted list into a single list
        
        ListNode *result=merge(left,right);
        
        return result;
        
    }
};