#include <stdio.h>
#include "main.h"

/*
 * A function that search for integer
 *
 * @array
 *
 * @size
 *
 * @cmp
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)

	return (-1);

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	return (i);
	}
	return (-1);

}
