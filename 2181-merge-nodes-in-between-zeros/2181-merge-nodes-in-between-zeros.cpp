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
    ListNode* mergeNodes(ListNode* head) {
        
        if(head==NULL || head->next==NULL) return head;
       
        
        ListNode* temp=head;
        ListNode* newhead=new ListNode(0,NULL);
        ListNode* temp1=newhead;
        
        int sum=0;
        while(temp->next!=NULL){
            if(temp->val!=0){
                sum+=temp->val;
                temp=temp->next;
            }
            else{
                ListNode* newnode=new ListNode(sum,NULL);
                temp1->next=newnode;
                temp1=temp1->next;
                temp=temp->next;
                sum=0;
            }
            
        }
        if(temp->val==0){
            ListNode* newnode=new ListNode(sum,NULL);
                temp1->next=newnode;
                temp1=temp1->next;
                temp=temp->next;
                sum=0;
        }
        temp1=newhead;
        while(temp1->val==0){
            temp1=temp1->next;
        }
       
        
        return temp1;
        
    }
};