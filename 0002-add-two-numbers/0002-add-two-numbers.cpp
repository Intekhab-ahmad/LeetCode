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
    void solve(ListNode* l1, ListNode* l2,ListNode* temp, int carry) {
        
        if(l1==NULL && l2 == NULL && carry == 0)
            return;
        
        int sum=0;
        if(l1!=NULL)
            sum=sum+l1->val;
        if(l2!=NULL)
            sum=sum+l2->val;
        sum=sum+carry;
        carry=sum/10;
        
        ListNode* dummy=new ListNode(sum%10);
        temp->next=dummy;
        temp=temp->next;
        
        if(l1) l1=l1->next;
        if(l2) l2=l2->next;
        
        solve(l1,l2,temp,carry);
        
        return;
        
        
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* ans=new ListNode();
        ListNode* temp=ans;
        int carry=0;
        solve(l1,l2,temp,carry);
        return ans->next;
    }
};