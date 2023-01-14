#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * @n: amount of bytes
  * Return: pointer to the allocated memory
  * if malloc fails, status value is equal to 98
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *slit;

	unsigned int ls1;

	unsigned int ls2;

	unsigned int lslit;

	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;
	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;
	if (n > ls2)
		n = ls2;
	lslit = ls1 + n;
	slit = malloc(lslit + 1);
	if (slit == NULL)
		return (NULL);
	for (i = 0; i < lslit; i++)
		if (i < ls1)
			slit[i] = s1[i];
		else
			slit[i] = s2[i - ls1];
	slit[i] = '\0';
	return (slit);
}
