#include "lists.h"

/**
 * add_nodeint_end - Fucntin that adds new node at end of
 * linked list
 * @head: head pointer
 * @n: data of new node
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		listint_t *nodeA = *head;

		while (nodeA->next != NULL)
		{
			nodeA = nodeA->next;
		}
		nodeA->next = newnode;
	}
	return (newnode);
}
