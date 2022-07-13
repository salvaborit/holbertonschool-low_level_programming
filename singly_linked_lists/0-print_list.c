#include "lists.h"
/**
* print_list - prints all the elements of linked list list_t
* @h: linked list to be accessed
*/
size_t print_list(const list_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
			h = h->next;
			continue;
		}
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
