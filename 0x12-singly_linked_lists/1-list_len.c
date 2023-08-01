#include <stdio.h>
#include "list.h"
#include <stdef.h>

/* number of elements in a linked list
 *
 *
 *
 */

size_t list_len(const list_t *h);
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

