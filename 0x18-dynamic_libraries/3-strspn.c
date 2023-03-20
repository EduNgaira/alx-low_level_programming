/**
 * _strspn - a function for prexif substring length
 *
 * @s: pointer to string input
 * @accept: substring prefix to identify
 *
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	int j;

	int f;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;

		f = 1; /*flag status*/

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				f = 0; /*success*/
				break;
			}
			j++;
		}
		if (f == 1)
		{
			break;
		}
		i++;
	}
	return (i);
}
