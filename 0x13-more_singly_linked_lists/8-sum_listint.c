#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all the data
 * of a linked list
 * @head: poinetr to pointer to head
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
