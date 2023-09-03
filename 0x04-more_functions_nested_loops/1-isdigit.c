#include "main.h"

/*
 * A function that checks for digits
 *
 * Return: 1 if "c" is a digit
 *
 * Return: 0 if otherwise
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
