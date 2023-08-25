#include "lists.h"

/**
 * add_node_end - Function that adds a new node at end of list
 * @head: pointer to pointer to head
 * @str: string to be stored in new node
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	const char *charA = str;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = 0;
	while (*charA != '\0')
	{
		newnode->len++;
		charA++;
	}

	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		list_t *nodeA = *head;

		while (nodeA->next != NULL)
		{
			nodeA = nodeA->next;
		}
		nodeA->next = newnode;
	}
	return (newnode);
}
