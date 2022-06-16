#include "main.h"
/**
 * print_number - fuction to print an integer.
 * 
 * Description: prints an integer
 * 
 * @n: The parameter of type int, input int
 * 
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}