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
        // if(head == NULL) return head;
        ListNode* tem = head;
        ListNode* p = NULL;


        while(tem != NULL)
        {
            ListNode* front = tem->next ;
            tem->next = p;
            p = tem;
            tem = front;

        }
        return p;
    }
};
