#include <stdio.h>
#include "main.h"


int _isupper(int c)
{
/*
 * A function that checks for upper case character
 *
 * The main function checks the code
 *
 * Return: 0
 */

	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
