#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * code to determine whether n is positive or negative
 * if else statement
 *
 */
int main (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	IF (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
