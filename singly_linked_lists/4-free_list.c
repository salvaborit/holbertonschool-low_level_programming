#include "lists.h"
/**
* free_list - frees a linked list
* @head: pointer to first node of ll
*/
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	temp = head;
	while (temp)
	{
		free(temp);
		temp = temp->next;
	}
}
