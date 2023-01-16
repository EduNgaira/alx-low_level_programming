#include "main.h"
#include <stdio.h>

/**
  * print_alphabet - prints alphabet in lowercase
  *
  * Return: Nothing
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
