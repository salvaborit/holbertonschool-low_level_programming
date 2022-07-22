#include "lists.h"
/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list
* @head: pointer to head node
* @n: node content
* Return: address of new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (!*head)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
	newNode->prev = temp;
	return (newNode);
}
