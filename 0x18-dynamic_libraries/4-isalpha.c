#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
  * _isalpha - function to determine if variable is a letter
  * @c: an integer being tested
  *
  * Return: lettertrue, 0 if not present.
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

