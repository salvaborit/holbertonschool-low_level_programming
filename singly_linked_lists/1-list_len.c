#include "lists.h"
/**
* list_len - returns number of elements in linked list
* @h: linked list
* Return: number of elements in list
*/
size_t list_len(const list_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
