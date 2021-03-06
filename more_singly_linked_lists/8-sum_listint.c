#include "lists.h"
/**
* sum_listint - returns sum of all the data (n) of a listint_t linked list
* @head: pointer to head node
* Return: sum of all elements of linked list
*/
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (!head)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
