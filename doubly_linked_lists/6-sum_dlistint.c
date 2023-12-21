#include <stdlib.h>
#include "lists.h"

/**
  * sum_dlistint - Sum of all data(n) in a doubly linked list
  * @head: The head of the doubly linked list
  *
  * Return: The sum of all data
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *num = head;
	int sum = 0;

	if (head)
	{
		while (num != NULL)
		{
			sum += num->n;
			num = num->next;
		}
	}

	return (sum);
}
