#include "lists.h"
/**
* add_nodeint - adds a new node at the beginning of a listint_t list
* @head: pointer to first node
* @n: int to put in new node
* Return: address of new element or NULL if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
