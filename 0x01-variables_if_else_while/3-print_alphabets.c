#include <stdio.h>

/**
 *main - prints lowercase alphabet and uppercase
 *Return: 0
 */

int main(void)
{
char lower = 'a';
char upper = 'A';
while (lower <= 'z')
{
putchar(lower);
lower++;
}
while (upper = 'A')
{
putchar(upper);
upper++;
}
putchar('\n');
return (0);
}
