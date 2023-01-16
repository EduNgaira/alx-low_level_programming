#include "main.h"
#include <stdio.h>

/**
  * print_alphabet_x10 - print ten times alphabet
  *
  * Return: Nothing
  */
void print_alphabet_x10(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		char c;

		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		i++;
		_putchar('\n');
	}
}
