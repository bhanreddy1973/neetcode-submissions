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
        if(!head && !head->next ) return ;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* a = slow->next;
        slow->next = NULL;
        ListNode* prev = NULL;

        while(a)
        {
            ListNode* b = a->next;
            a->next = prev;
            prev = a;
            a = b;
        }
        ListNode* first = head;
        ListNode* second = prev;
        while(second){
        ListNode* tem1 = first->next;
        ListNode* tem2 = second->next;

        first->next = second;
        second->next = tem1;

        first = tem1;
        second = tem2;

        }





    }
};
