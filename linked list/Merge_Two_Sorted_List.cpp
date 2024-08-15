ListNode *mergeTwoLists(ListNode *first, ListNode *second)
{
    if (first == NULL)
        return second;
    if (second == NULL)
        return first;
    ListNode *result;
    if (first->val < second->val)
    {
        result = first;
        result->next = mergeTwoLists(first->next, second);
    }
    else
    {
        result = second;
        result->next = mergeTwoLists(first, second->next);
    }
    return result;
}