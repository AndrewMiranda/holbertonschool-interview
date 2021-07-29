#include "lists.h"

/**
 * insert_node - adds and sorts a new number
 * @head: pointer to pointer of first node of listint_t list
 * @number: integer to be included
 * Return: address of the new element or NULL if it fails
 *
 * Made by Facundo Diaz for Holberton School 2021
 */
listint_t *insert_node(listint_t **head, int number)
{
	int x = 0, guardar = 0;
	listint_t *current, *ret;

	current = *head;
	(void)guardar;

	if (current == NULL)
		add_nodeint_end(head, number);
	else
	{
		while (x == 0)
		{
			if (current == NULL)
			{
				add_nodeint_end(head, number);
				return (current);
			}
			else if (number < current->n)
				x = 1;
			else
			{
				current = current->next;
			}
		}

		while (current != NULL)
		{
			guardar = current->n;
			current->n = number;
			number = guardar;
			current = current->next;
		}
		ret = current;

		add_nodeint_end(head, number);
	}

	free_listint(current);

	return (ret);
}
