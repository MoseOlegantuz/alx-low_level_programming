#include "main.h"

/**
 * swap_int - function to swap values of two integers
 * @x: int pointer type
 * @y: int pointer type
 */
void swap_int(int *x, int *y)
{
	int z;

	z = *x;
	*x = *y;
	*y = z;
}
