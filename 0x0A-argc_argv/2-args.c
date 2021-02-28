#include <stdio.h>

/**
 * main - prints each value for argv
 * @argc: size of the array
 * @argv: array containing the values
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
