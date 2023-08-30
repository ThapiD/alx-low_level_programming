#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes the node at index
 * of a linked list
 * @head: pointer to pointer to head
 * @index: index of node that should be deleted
 * Return: 1 if success and -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *nodeA = *head;
	listint_t *nodeB;
	unsigned int num = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (nodeA != NULL && num < index)
	{
		nodeB = nodeA;
		nodeA = nodeA->next;
		num++;
	}
	if (nodeA == NULL)
	{
		return (-1);
	}
	nodeB->next = nodeA->next;
	free(nodeA);
	return (1);
}
