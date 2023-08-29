#include "lists.h"

/**
 * print_listint - Function that prints all elements
 * @h: head pointer
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h == NULL)
		{
			printf("Node empty");
		}
		else
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		i++;
	}
	return (i);
}
