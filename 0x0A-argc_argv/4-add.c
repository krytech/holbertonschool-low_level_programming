#include <stdio.h>
#include <stdlib.h>

/**
 * is_num - checks to see if the values are only numbers
 * @s: string to check
 * Return: 0 if not numbers, 1 if all numbers
 */

int is_num(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * main - adds all numbers up
 * @argc: size array of numbers
 * @argv: array storing numbers
 * Return: sum of all numbers, otherwise Error
 */ 

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (is_num(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		if (atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
