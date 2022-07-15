#include "lists.h"
/**
* get_nodeint_at_index - returns nth node of a listint_t list
* @head: pointer to head node
* @index: index of node starting with 0
* Return: nth node of linked list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (!head)
		return (NULL);
	temp = head;
	for (i = 0; i < index && temp->next != NULL; i++)
		temp = temp->next;
	return (temp);
}
