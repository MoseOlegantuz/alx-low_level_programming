#include <stdio.h>
/**
* main - entry point
* Print numbers using putchar
* 
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
