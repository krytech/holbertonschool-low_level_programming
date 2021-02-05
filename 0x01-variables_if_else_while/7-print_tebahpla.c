#include <stdio.h>
/**
 * main - abc backwards
 * Return: 0
 */
int main(void)
{
int x = 'z';
while (x >= 'a')
{
putchar(x);
x--;
}
putchar('\n');
return (0);
}
