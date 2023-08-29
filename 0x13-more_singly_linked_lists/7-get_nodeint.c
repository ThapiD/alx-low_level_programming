#include "lists.h"

/**
 * push - Function to push new node to front of list
 * @head: pointer to pointer of head
 * @new_n: new data for new node
 * Return: void
 */
void push(listint_t **head, unsigned int new_n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	newnode->n = new_n;
	newnode->next = (*head);
	(*head) = newnode;
}

/**
 * get_nodeint_at_index - Function that returns the nth node
 * a linked list
 * @head: head pointer
 * @index: index of the node starting at 0
 * Return: nth node of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;

	listint_t *nodeA = head;

	while (nodeA != NULL)
	{
		if (num == index)
			return (nodeA);
		num++;
		nodeA = nodeA->next;
	}
	return (NULL);
}
