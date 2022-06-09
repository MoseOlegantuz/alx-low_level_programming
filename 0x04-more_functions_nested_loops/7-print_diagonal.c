#include "main.h"
/**
 * print_diagonal - draw a diagonal line
 * @n: number of times the '\' char is printed
 * Description: Can only use _putchar to print
 */
void print_diagonal(int n)
{
	int a, i;

	a = 0;

	while (n > 0)
	{
		i = a;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
		n--;
	}
	if (a < 1)
		_putchar('\n');
}
