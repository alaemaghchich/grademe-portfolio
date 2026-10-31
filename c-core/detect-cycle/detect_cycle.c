
#include "list.h"

int detect_cycle(ListNode *list)
{
    ListNode *slow = list;
    ListNode *fast = list;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return 1;
    }

    return 0;
}
