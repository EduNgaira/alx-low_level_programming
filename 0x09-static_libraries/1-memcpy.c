#include "main.h"
#include<stdio.h>

/**
  * _memcpy - function to copy memory area
  * @dest: where memory is stored
  * @src: where memory is copied
  * @n: number of bytes
  *
  * Return: memory with changed byte
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;

	int i = n;

	for (r = 0; r < i; r++)
	{
		dest[r] = src[r];
		r--;
	}
	return (dest);
}
