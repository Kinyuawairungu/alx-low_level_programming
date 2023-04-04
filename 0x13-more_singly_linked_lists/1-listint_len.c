#include "lists.h"

/**
 * listint_len -  num to be returned in a list of elements
 * @h: pointer will point to the listint_t
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
