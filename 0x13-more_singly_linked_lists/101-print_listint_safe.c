#include "lists.h"

/**
 * print_listint_safe - Function that prints a linked list
 * @head: head pointer
 * Return: the number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;

	while (head != NULL)
	{
		i++;
		if (head <= head->next)
		{
			exit(98);
		}
		head = head->next;
	}
	return (i);
}
