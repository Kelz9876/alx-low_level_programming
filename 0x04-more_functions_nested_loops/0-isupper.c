#include "main.h"

int _isupper(int c)
{
 /*
    	* A function that checks for an uppercase character
     *
     * _isupper -This function checks whether the input character 'c'
     * is an uppercase letter (A-Z).
 
     *
     *
     * Return: 1 if 'c' is an uppercase letter, 0 otherwise.
     */

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
