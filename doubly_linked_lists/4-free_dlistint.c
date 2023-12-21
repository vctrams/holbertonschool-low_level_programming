#include "lists.h"
#include <stdlib.h>
/**
  * free_dlistint - function that frees a dlistint_t list.
  * @head: start of doubly linked list
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *hold;

		while (head)
		{
			hold = head;
			head = (*head).next;
			free(hold);
		}
}
