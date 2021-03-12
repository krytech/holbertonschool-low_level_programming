#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode based on inputed arguments
 * @argc: number of arguments
 * @argv: argument values
 * Return: opcode based on arguments
 */

int main(int argc, char *argv[])
{
	int num;
	int i;


	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < (num - 1); i++)
	{
		printf("%02x ", ((unsigned char *)main)[i]);
	}
	printf("%02x", ((unsigned char *)main)[i]);
	printf("\n");

	return (0);
}
