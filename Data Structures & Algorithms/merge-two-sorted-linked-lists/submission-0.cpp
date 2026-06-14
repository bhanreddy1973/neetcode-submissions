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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* tem1 = l1;
        ListNode* tem2 = l2;
        ListNode* dummy = new ListNode(-1);
        ListNode* tem = dummy;
        while(tem1 != nullptr && tem2 != nullptr)
        {
            if(tem1->val < tem2->val)
            {
                tem->next = tem1;
                tem = tem1;
                tem1=tem1->next;
            }else
            {
                tem->next = tem2;
                tem = tem2;
                tem2=tem2->next;
            }

        }
                    while(tem1)
                    { tem->next = tem1;
                    tem = tem1;
                    tem1 = tem1->next;
                    }
            while(tem2) {

                tem ->next = tem2;
                tem = tem2;
                tem2=tem2->next;
            }
            
            return dummy->next;
    }
};
