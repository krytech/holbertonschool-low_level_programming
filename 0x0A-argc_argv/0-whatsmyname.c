#include <stdio.h>

/**
 * main - prints the file name followed by a new line
 * @argc: size of the array, number of commands
 * @argv: holds array values / commands
 * Return: 0 if successful
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
