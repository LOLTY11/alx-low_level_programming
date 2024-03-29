#include "lists.h"

/**
  * listint_len - prints number of elements of a linked list
  * @h: points to head of list
  * Return: size_t number of elements
*/

size_t listint_len(const listint_t *h)

{
	unsigned int i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
