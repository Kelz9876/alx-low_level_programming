#include <stdio.h>
#include "list_h"

/* prints all the element of the list
 * @h : pointer
 * return :the number of node
 */

size_t print_list(const list_t *h);
{
	size_t s = 0;

	while (h != NULL)
	{
		if (h ->str != NULL)
		{
			printf("%s\n", h ->str);
		}
			else
			{
				printf("[0] (nil)\n");
			}
			h = h ->next;
			s++;
		}
	return s;
}
