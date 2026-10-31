#include "list.h"
#include <stddef.h>

void	list_apply(ListNode *list, void (*f)(void *))
{
	ListNode *tmp = list;
	while(tmp)
	{
		f(tmp->data);
		tmp  = tmp->next;
	}
}
