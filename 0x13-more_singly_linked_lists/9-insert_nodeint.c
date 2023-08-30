#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a new node at
 * a given position
 * @head: pointer to pointer to head
 * @idx: index of list where new node should be added
 * @n: data
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *nodeA = *head;
	unsigned int j;

	newnode = malloc(sizeof(listint_t));
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (j = 0; nodeA != NULL && j < idx - 1; j++)
	{
		nodeA = nodeA->next;
	}
	if (nodeA == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = nodeA->next;
	nodeA->next = newnode;
	return (newnode);
}
