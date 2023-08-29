#include "lists.h"

/**
 * free_listint2 - Function that a linked list
 * @head: pointer to pointer to a head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	while (*head != NULL)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);;
	}
}
