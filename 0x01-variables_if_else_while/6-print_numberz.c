#include<stdio.h>
/**
 * main - single digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	char x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
