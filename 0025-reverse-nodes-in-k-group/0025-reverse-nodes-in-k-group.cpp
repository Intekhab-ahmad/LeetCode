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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head==NULL || k==1) return head;
        
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        
        ListNode *temp1=head;
        int count=1;
        while(temp1->next){
            temp1=temp1->next;
            count++;
        }
        
        ListNode* prev=dummy,*curr=dummy,*nex=dummy;
        while(count>=k){
            curr=prev->next;
            nex=curr->next;
            for(int i=1;i<k;i++){
                curr->next=nex->next;
                nex->next=prev->next;
                prev->next=nex;
                nex=curr->next;
            }
            prev=curr;
            count-=k;
        }
        return dummy->next;
        
        
    }
};