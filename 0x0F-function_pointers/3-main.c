#include "3-calc.h"
#include <stdio.h>

/**
 *
 */

int main(int argc, char *argv[])
{

	if (argc != 4)
	{
		printf("Error 1\n");
		exit(98);
	}

	if (get_op_func(argv[2]))
		printf("%d\n", get_op_func(argv[2])(atoi(argv[1]),
						    atoi(argv[3])));
	else
	{
		printf("Error 2\n");
		exit(99);
	}
	return (0);
}
