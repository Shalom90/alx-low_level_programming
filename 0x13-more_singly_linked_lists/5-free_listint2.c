#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *c;

	if (head != NULL)
	{
		c = *head;
		while ((tmp = c) != NULL)
		{
			c = c->next;
			free(tmp);
		}
		*head = NULL;
	}
}
