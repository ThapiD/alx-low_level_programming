#include "lists.h"

/**
 * list_len - Function that returns number of
 * elements
 * @h: pointer to head of list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
