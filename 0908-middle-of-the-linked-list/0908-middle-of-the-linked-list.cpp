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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
        }
        temp=head;
        if(cnt%2==0){
        for(int i=cnt/2;i<cnt;i++){
            temp=temp->next;
        }}
        else{
              for(int i=(cnt/2)+1;i<cnt;i++){
            temp=temp->next;
        }
        }
        return temp;
    }
};