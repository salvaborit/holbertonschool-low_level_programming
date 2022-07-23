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
	if (!newNode)
		return (NULL);
	newNode->n = n;
	
	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));
	temp = *h;
	for (i = 0; i < idx - 1 && temp; i++)
	{
		temp = temp->next;
		if (temp->next == NULL)
			return (NULL);
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));
	newNode->next = temp->next;
	newNode->prev = temp;
	temp->next = newNode;
	temp = newNode->next;
	temp->prev = newNode;
	return (newNode);
}
