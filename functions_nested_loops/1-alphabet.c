#include "main.h"

/**
* print_alphabet - prints the alphabet in lower case
*
* Return: No return value
*/

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
