#include "lists.h"


/**
 * check_cycle - checks if a singly linked list has a cycle in it
 *
 * @list: pointer to the first elemento to the list
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *fast = NULL, *slow = NULL;

	if (list == NULL || list->next == NULL)
		return (0);

	slow = list;
	fast = list->next;
	while (slow != NULL && fast->next != NULL && fast->next->next != NULL)
	{
		if (fast == slow)
			return (1);

		slow = slow->next;
		fast = fast->next->next;
	}

	return (0);
}
