#include "lists.h"

/**
 * add_nodeint - Function that adds node at the
 * beginning of a linked list
 * @head: head pointer
 * @n: new node
 * Return: the address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *nodeA;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n == strdup(n);
	if (newnode->n == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->n 
	while (nodeA != NULL)
	{
		nodeA = nodeA->next;
		free(newnode);
	}
	return (newnode);
}
