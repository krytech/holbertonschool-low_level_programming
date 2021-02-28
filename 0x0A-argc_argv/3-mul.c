#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of two ints
 * @argc: size of the array
 * @argv: array containing the values
 * Return: multiplication of two numbers, otherwise Error
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
