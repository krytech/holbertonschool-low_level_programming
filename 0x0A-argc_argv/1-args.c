#include <stdio.h>

/**
 * main - prints the number of arguments / commands followed by a new line
 * @argc: size of the array, number of commands
 * @argv: array containing the values / commands
 * Return: 0 if successful
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
