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
    int getDecimalValue(ListNode* head) {
        
        ListNode *temp=head;
        int count=1;
        
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }
        int ans=0;
        temp = head;
        while(temp!=NULL){
            if(temp->val==1){
                ans+=pow(2,count-1);
            }
            count--;
            temp=temp->next;
        }
        return ans;
        
    }
};
