#include <stddef.h>

typedef struct ListNode
{
	void          *data;
	struct ListNode *next;
} ListNode;

int	list_node_count(ListNode *head)
{
	ListNode *tempo;
	tempo = head;
	int i = 0;
	while (tempo != NULL)
	{
		tempo = tempo->next;
		i++;
	}
	return (i);
}
