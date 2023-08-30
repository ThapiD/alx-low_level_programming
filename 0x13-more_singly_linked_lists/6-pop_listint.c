#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a
 * linked list
 * @head: pointer to pointer of head
 * Return: the head nodes data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (0);
}
