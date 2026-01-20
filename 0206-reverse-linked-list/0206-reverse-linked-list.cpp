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
        // ListNode* temp=head;
        // ListNode* prev=NULL;
        // while(temp!=nullptr){
        //     ListNode* curr=temp->next;
        //     temp->next=prev;
        //     prev=temp;
        //     temp=curr;
        // }
        // return prev;
        if(head==nullptr||head->next==nullptr)return head;
        stack<ListNode*>st;
        ListNode* temp=head;
        while(temp!=nullptr){
            st.push(temp);
            temp=temp->next;
        }
        head=st.top();
        st.pop();
        temp=head;
        while(!st.empty()){
            temp->next=st.top();
            st.pop();
            temp=temp->next;
        }
    temp->next=nullptr;
        return head;
    }
};