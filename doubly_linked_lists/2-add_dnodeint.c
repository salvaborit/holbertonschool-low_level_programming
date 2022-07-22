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
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	(*head)->prev = newNode;
	*head = newNode;
	return (newNode);
}
