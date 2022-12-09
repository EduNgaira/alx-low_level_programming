#include <stdio.h>
/**
 * main - Print big and small letters
 *
 * Return: Always 0
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	x = 'A';
	while (x <= 'A')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
