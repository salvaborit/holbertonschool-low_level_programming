#include "lists.h"
/**
* reverse_listint - reverses a listint linked list
* @head: pointer to head node
* Return: pointer to first node of reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	unsigned int i;

	if (*head == NULL)
		return (NULL);
	for (; *head; )
	{
		if (head->next == NULL)
			return (NULL);
		temp = *head;
		h
		head = head->next;
		head->next = temp;
	}
}
