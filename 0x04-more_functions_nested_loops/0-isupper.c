#include <stdio.h>
#include "main.h"

/*
 * A function that checks for upper case character
 *
 * The main function checks the code
 *
 * returns : 0
 */


int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
