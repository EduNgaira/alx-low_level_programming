/**
 * _strchr - a function locating character in a string
 * @s: pointer to our string array input
 * @c: character to locate from input array
 *
 * Return: first occurence of char/null if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	/**
	 * if c is '\0', return pointer to
	 *'\0' of the string s
	 */
	if (*s == c)
	{
		return (s);
	}
	/*return null if not found*/
	return ('\0');
}
