ListNode *reverse(ListNode *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    ListNode *last = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return last;
}
ListNode *reverseList(ListNode *head)
{

    return reverse(head);
}