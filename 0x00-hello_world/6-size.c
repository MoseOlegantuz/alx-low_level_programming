#include <stdio.h>
/**
* main - entrypoint
*
* Return: Always 0 (success)
*
*/
int main(void)
{
	char v;
	int w;
	long x;
	long long y;
	float z;

	printf("Size of a char: %lu byte(s)\n", sizeof(v));
	printf("Size of an int: %lu byte(s)\n", sizeof(w));
	printf("Size of a long int: %lu byte(s)\n", sizeof(x));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(y));
	printf("Size of a float: %lu byte(s)\n", sizeof(z));
	return (0);
}
