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
	int i;

	for (i = 0; i <= argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}
