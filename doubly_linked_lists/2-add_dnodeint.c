#include "lists.h"
/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list
* @head: pointer to head node
* @n: content of node
* Return: address of new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	if (*head)
	{
		newNode->next = *head;
		(*head)->prev = newNode;
	}
	else
		newNode->next = NULL;
	*head = newNode;
	return (newNode);
}
