#include <stdio.h>
#include "main.h"


/**
  * main - Print program name
  * @argc: Number of arguments
  * @argv: Arguments
  *
  * Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	int count;

	count = 0;
	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			argv[count]++;
		}
	}
	return (0);
}
