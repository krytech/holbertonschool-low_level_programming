#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - entry point
 *Return: 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
prinf("Last digit of %i is %i and is", n, (n % 10));
if ((n % 10) > 5)
{
printf("and is greater than 5\n");
}
else if ((n % 10) == 0)
{
printf("and is 0\n");
else
{
printf("and is less than 6 and not 0");
}
return (0);
}
