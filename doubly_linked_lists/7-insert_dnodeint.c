#include "lists.h"
/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: pointer to head node
* @idx: index of new node
* @n: contents of new node
* Return: address of new node or NULL if failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp;
	unsigned int i;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode || !*h)
		return (NULL);
	newNode->n = n;
	temp = *h;
	if (idx == 0)
	{
		newNode->prev = NULL;
		newNode->next = *h;
		*h = newNode;
		return (newNode);

	}
	for (i = 0; i < idx - 1; i++)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = (temp->next);
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
