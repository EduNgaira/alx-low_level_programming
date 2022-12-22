#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @p: pointer
 * @ROT13: rotate by 13 places
 * Return: Always 0.
 */

int main(void)
{
	char s[] = "ROT13 (\"rotate by 13 places\","
	     "sometimes hyphenated ROT-13)"
		     "is a simple letter substitution cipher.\n";

	char *p;


	p = ROT13(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	printf("------------------------------------\n");
	p = ROT13(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	printf("------------------------------------\n");
	p = ROT13(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	return (0);
}
