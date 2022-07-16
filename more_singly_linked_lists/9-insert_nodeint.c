#include "lists.h"
/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to head node
* @idx: index of list where new node should be added (index starts at 0)
* @n: int to add to node
* Return: adress of new node or NULL if failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newNode;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));
	if (!head || !newNode)
		return (NULL);
	newNode->n = n;
	temp = *head;
	if (idx == 0)
	{
		newNode->next = temp->next;
		*head = newNode;
		return (newNode);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
