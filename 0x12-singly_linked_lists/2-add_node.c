#include "lists.h"

/**
 * add_note - Function that a new node at start of list
 * @head: pointer to pointer the head of linked list
 * @str: pointer to string
 * Return: address of new element or NULL if it failed
 */
list_t *add_note(list_t **head, const char *str)
{
	int i = 0;
       	list_t *newnode = (list_t *)malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}
	newnode->str = i;
	newnode->len = len;
	newnode->next = *head;

	*head = newnode;
	return newnode;
}
