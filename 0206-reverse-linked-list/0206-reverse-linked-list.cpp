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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
        }
        ListNode* prev=NULL;
        temp=head;
        for(int i=0;i<cnt;++i){
            ListNode* newnode=temp->next;

            temp->next=prev;
            prev=temp;
            temp=newnode;


        }
        return prev;
    }
};