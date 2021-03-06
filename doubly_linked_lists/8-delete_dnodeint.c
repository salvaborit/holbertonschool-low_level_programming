#include "lists.h"
/**
* delete_dnodeint_at_index - deletes node at index of a dlistint_t list
* @head: pointer to head node
* @index: index of node to delete
* Return: 1 if success, -1 if failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prevNode, *nextNode, *bruh;
	unsigned int i;

	temp = *head;
	if (!temp)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
		if (!temp)
			return (-1);
	}
	if (!temp->next)
	{
		bruh = temp;
		bruh = temp->prev;
		bruh->next = NULL;
		free(temp);
		return (1);
	}
	prevNode = temp->prev;
	nextNode = temp->next;
	prevNode->next = nextNode;
	nextNode->prev = prevNode;
	free(temp);
	return (1);
}