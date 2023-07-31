#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/* function that adds node at the beginning
 * create a new node 
 * duplicate the input string
 *
 */

list_t *add_node(list_t **head, const char *str);
{
	if (str == NULL)
	{
		return NULL;
	}
list_t *new_node = (list_t *)malloc(sizeof(list_t));
if (new_node == NULL )
{
	return NULL;
}

new_node ->next = *head;

*head = new_node;

return new_node;
}
