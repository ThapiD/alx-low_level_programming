#include "lists.h"

/**
 * push - Function that inserts a new node at
 * beginning of linked list
 * @head: pointer to pointer to head
 * @new_n: new data for new node
 * Return: void
 */
void push(listint_t **head, int new_n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	newnode->n = new_n;
	newnode->next = (*head);
	(*head) = newnode;
}

/**
 * sum_listint - Function that returns the sum of all the data
 * of a linked list
 * @head: poinetr to pointer to head
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
