#include<stdio.h>
#include<math.h>
/**
 * main - Combination of single digits
 *
 * Return: Always 0
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++);
	{
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
