#include "lists.h"
/**
* add_node - adds a new node at the beginning of a linked list
* @head: points to first element
* @str: string to add to list
* Return: address of new element
*/
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *newHead;
	list_t newNode;
		
	newNode = malloc(sizeof(list_t));
	if (newNode != NULL)
		return (NULL);
	newNode = {str, strlen(str), **head};
	newHead = newNode->str;
	return (newHead);
}
