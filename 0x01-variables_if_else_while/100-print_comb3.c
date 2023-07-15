#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Returns: Always 0
 */

int main(void)
{
	int m = '0';
	int l = '1';

	while (m <= '9')
	{
		while (l <= '9')
		{
			if (!(m > l) || m == l)
			{
				putchar(m);
				putchar(l);
				if (m == '8' && l == '9')
					putchar('\n');
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			l++;
		}
		l = '0';
		m++;
	}
	return (0);
}
