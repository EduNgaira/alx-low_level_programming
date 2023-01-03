/**
 * _memset -> function filling memory with constant byte
 * @s: input pointer to char
 * represents the pointer to the
 * block of memory to fill
 * @b: input type char variable
 * representing character to fill s
 * @n: unsigned int variable
 * number of bytes to be filled
 *
 * Return: A pointer to the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * declare an unsigned int
	 * because we are storing a
	 * value that will always be
	 * non-negative (zero or positive)
	 */
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
