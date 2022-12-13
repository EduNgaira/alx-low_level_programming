#include "main.h"
/**
 * main - Print alphabet ten times
 *
 * Return: 0
 */

void print_alphabet_x10(void);
{
	int x;
	int y;

	for (y = 0; y < 10; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	}
	putchar('\n');
}
