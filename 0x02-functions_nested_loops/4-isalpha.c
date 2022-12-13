#include "main.h"
/**
 * _isalpha - check for alphabetic letters
 *
 * @c: character to check
 *
 * Return: 0 or 1 depending on condition
 */
int _isalpha(int c);
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
