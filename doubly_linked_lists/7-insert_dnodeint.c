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
	dlistint_t *newNode, *nextNode, *temp;
	unsigned int i;
	
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	if (*h)
		temp = *h;
	for (i = 0; i < idx && temp; i++)
		temp = (temp->next);
	nextNode = temp->next;
	newNode->prev = temp;
	newNode->next = nextNode;
	return (newNode);
}
