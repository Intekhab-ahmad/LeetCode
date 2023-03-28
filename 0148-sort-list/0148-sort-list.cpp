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
    ListNode* sortList(ListNode* head) {
        
        if(head==NULL) return head;
        
        ListNode* temp=head;
        
        vector<int> list;
        
        while(temp->next!=NULL){
            list.push_back(temp->val);
            temp=temp->next;
        }
        list.push_back(temp->val);
        temp=NULL;
        
        sort(list.begin(),list.end());
        int n=list.size();
        ListNode* newnode=new ListNode(list[0],NULL);
        temp=newnode;
        head=temp;
        for(int i=1;i<n;i++){
            
            ListNode* newnode=new ListNode(list[i],NULL);
            temp->next=newnode;
            temp=temp->next;
        }
        return head;
        
        
        
    }
};