#include "lists.h"

/**
  * get_dnodeint_at_index - returns the nth node of a dlistint_t linked
  * @head: start of doubly linked list
  * @index: index to return value
  * Return: return the nth node at a given index
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head; i++, head = head->next)
		if (i == index)
			return (head);
	return (NULL);
}
