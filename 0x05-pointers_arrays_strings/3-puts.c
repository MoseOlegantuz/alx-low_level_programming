#include "main.h"

/**
 * _puts - function to print a string to stdout
 * @str: char array of string type
 * Description: Can only use _putchar
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
