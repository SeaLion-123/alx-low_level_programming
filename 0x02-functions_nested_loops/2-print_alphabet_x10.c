#include "main.h"

/**
 * print__alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * then a new line
 */

void print_alphabet_x10(void)
{

	char alpha;
	int i;

	i= 0;

	while (i < 10)
	{
		alpha ='a';
		while (ch <= 'z')
		{

			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;

	}
}
