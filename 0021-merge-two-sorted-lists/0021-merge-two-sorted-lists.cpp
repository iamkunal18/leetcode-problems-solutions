/**
 *Definition for singly-linked list.
 *struct ListNode {
 *   int val;
 *   ListNode * next;
 *   ListNode() : val(0), next(nullptr) {}
 *   ListNode(int x) : val(x), next(nullptr) {}
 *   ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* mergeTwoLists(ListNode *lsit1, ListNode *list2)
        {
            if (!lsit1)
                return list2;
            if (!list2)
                return lsit1;

           	// start with the linked list
           	// whose head data is the least
            if (lsit1->val < list2->val)
            {
                lsit1->next = mergeTwoLists(lsit1->next, list2);
                return lsit1;
            }
            else
            {
                list2->next = mergeTwoLists(lsit1, list2->next);
                return list2;
            }
        }
};