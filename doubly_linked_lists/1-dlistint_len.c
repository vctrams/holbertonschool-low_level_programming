#include "lists.h"
/**
 * dlistint_len - number of elements in a linked dlistint_t
 * @h: doubly linked list node
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		++size;
		h = h->next;
	}

	return (size);
}
