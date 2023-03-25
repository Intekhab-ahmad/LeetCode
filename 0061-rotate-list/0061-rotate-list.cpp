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
    
        
    ListNode* rotateRight(ListNode* head, int k) {
        
        
        if(head==NULL) return head;
        ListNode* temp1=head;
        ListNode *temp2=NULL;
        int count=1;
        while(temp1->next!=NULL){
            count++;
            temp1=temp1->next;
        }
        
       /* while(temp!=NULL){
            cout<<temp->val;
            temp=temp->next;
        }*/
        //cout<<count;
        temp1->next=head;
        k=k%count;
        int len=count-k;
        while(len--){
            temp1=temp1->next;
        }
        //cout<<temp1->val;
        temp2=temp1->next;
        cout<<temp2->val;
        
        temp1->next=NULL;
        

        
        
        return temp2;
    }
};