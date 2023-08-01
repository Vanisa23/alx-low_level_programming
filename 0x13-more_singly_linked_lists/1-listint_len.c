#include "lists.h"
/**
 * listint_len - function returns the number of elements
 * in linked lists.
 * @h: pointer to constant listint_t which represent the
 * nodes of the linked lists.
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
