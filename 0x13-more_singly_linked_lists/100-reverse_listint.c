#include "lists.h"
/**
 * reverse_listint - Function that reverses a linked list
 * @head: pointer to pointer to head
 * Return: a pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nodeB = NULL;
	listint_t *nodeA = (*head)->next;

	while (*head != NULL)
	{
		(*head)->next = nodeB;
		nodeB = *head;

		*head = nodeA;
	}
	*head = nodeB;
	return (*head);
}
