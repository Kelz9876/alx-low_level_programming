#include <stdio.h>
#include "main.h"

/*
 * A function that prints name
 *
 * @name: string to add
 * @f: pointer to function
 *
 *
 * return 0
 **/


void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)

		return;

	f(name);
}
