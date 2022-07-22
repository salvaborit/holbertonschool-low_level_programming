#include "lists.h"
/**
* sum_dlistint - retutrns the sum of all the data (n) of a dlistint_t list
* @head: pointer to head node
* Return: sum of all the data in linked list
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
