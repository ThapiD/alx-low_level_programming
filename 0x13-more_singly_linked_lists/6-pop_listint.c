#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a
 * linked list
 * @head: pointer to pointer of head
 * Return: the head nodes data(n)
 */
int pop_listint(listint_t **head)
{
	int i = (*head)->n;
	listint_t *temp = *head;

	if (*head == NULL)
	{
		return (0);
	}

	*head = (*head)->next;
	free(temp);

	return (i);
}
