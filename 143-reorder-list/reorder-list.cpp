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
    void reorderList(ListNode* head) {

        ListNode* slow= head;
        ListNode* fast = head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;

        }
        ListNode* secondl = slow->next;
        slow->next=nullptr;

        ListNode* prev = nullptr;
        ListNode* curr = secondl;
        while(secondl !=nullptr){
            ListNode* next = secondl->next;
            secondl->next=prev;
            prev=secondl;
            secondl=next;

        }
        secondl=prev;
        ListNode* firstl = head;

        while(secondl != nullptr){
            ListNode* t1 = firstl->next;
            ListNode* t2 = secondl->next;

            firstl->next=secondl;
            secondl->next=t1;

            firstl=t1;
            secondl=t2;

        }



        



        
    }
};