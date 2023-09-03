#include <stdio.h>

int _isupper(int c)
{
  /*
     * A function that checks for an uppercase character
     *
     * This function checks whether the input character 'c'
     * is an uppercase letter (A-Z).
     *
     * _isupper - Checks if a character is an uppercase letter
     *
     *
     * Return: 1 if 'c' is an uppercase letter, 0 otherwise.
     */

	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
