#include "main.h"
/**
 * main - Print alphabet
 *
 * Return: Always 0
 */

void print_alphabet(void);
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}

	_putchar('\n');
}
