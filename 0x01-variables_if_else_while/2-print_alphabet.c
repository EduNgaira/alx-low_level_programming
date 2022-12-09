#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print letters of the alphabet
 *
 * Return: Always 0
 */

int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		int lower_x = x;

		putchar(x);
	}
	putchar("\n")

	return (0);
}
