#include "lists.h"

/**
 * listint_len - Function that returns
 * the number of elements in a linked list
 * @h: head pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
