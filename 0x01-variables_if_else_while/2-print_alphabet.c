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

	char letters[26] = "abcdefghijklmnopqrstuvwxyz";

	for (x = 0; x <= 25; x++)
	{
		putchar(letters[x]);
	}
	putchar('\n');
	return (0);
}
