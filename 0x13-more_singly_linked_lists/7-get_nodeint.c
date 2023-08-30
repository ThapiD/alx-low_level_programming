#include "lists.h"

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
