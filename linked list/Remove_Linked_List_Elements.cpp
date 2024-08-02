class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *curr = head, *prev = head;
        bool b = 1;
        while (curr)
        {
            if (curr->val == val)
            {
                prev->next = curr->next;

                if (b == 1)
                {
                    head = head->next;
                }
            }
            else
            {
                b = 0;
                prev = curr;
            }
            curr = curr->next;
        }
        return head;
    }
};