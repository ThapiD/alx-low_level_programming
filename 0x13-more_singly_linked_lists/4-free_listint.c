#include "lists.h"

/**
 * free_listint - Function that frees a linked list
 * @head: head pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *temp = head;

		head = head->next;
		free(temp);
	}
}
