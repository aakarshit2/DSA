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
    ListNode* partition(ListNode* head, int x) {
        if(!head || !head->next) return head;

        ListNode* lessDummy=new ListNode(0);
        ListNode* greaterDummy=new ListNode(0);

        ListNode* less=lessDummy;
        ListNode* greater=greaterDummy;

        while(head){
            ListNode* next=head->next;
            head->next=nullptr;

            if(head->val<x){
                less->next=head;
                less=less->next;
            }
            else{
                greater->next=head;
                greater=greater->next;
            }
            head=next;
        }
        less->next=greaterDummy->next;

        return lessDummy->next;
    }
};