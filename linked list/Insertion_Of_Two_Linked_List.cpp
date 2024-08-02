class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        unordered_map<ListNode *, bool> m;
        while (headA != NULL)
        {
            m[headA] = 1;
            headA = headA->next;
        }
        while (headB != NULL)
        {
            if (m.find(headB) != m.end())
                return headB;
            headB = headB->next;
        }
        return NULL;
    }
};