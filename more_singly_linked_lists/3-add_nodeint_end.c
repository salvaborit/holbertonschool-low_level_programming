#include "lists.h"
/**
* add_nodeint_end - adds a new node at the end of a listint_t list
* @head: pointer to first node
* @n: int to put in node
* Return: address of new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
	return (newNode);
}
