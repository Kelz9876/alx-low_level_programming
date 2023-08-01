#include "lists.h"

/*
 * print all elements of a list
 * return : the number of node
 * 
 *
 *
 */ 
 

size_t print_listint(const listint_t *h);
{
	size_t s = 0

	while (h)
	{
		printf("%d\n", h->n);
		s++;
		h = h->next;
	}

	return (s);
}


