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
 ListNode* reverseLinkedList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while (curr != NULL) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return 1;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast !=NULL && fast->next !=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
        }
        ListNode* newhead=reverseLinkedList(slow);
        ListNode* first=head;
        ListNode* second=newhead;
        while(second !=NULL){
            if(first->val!=second->val){
                reverseLinkedList(newhead);
                return 0;
            }
            first=first->next;
            second=second->next;
        }
        reverseLinkedList(newhead);
        return 1;

    }
};