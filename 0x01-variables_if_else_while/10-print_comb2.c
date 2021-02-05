#include <stdio.h>

/**
 *main - prints 00 to 99 with commas using putchar
 *Return: 0
 */

int main(void)
{
	int tens;
	int ones;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			putchar(tens);
			putchar(ones);
			if (!(tens == '9' && ones == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
