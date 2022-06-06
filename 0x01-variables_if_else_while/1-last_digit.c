#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
<<<<<<< HEAD
 * main - entry point
 *
 * Description: statement for this question
 *
 * Return: 0
 *
 */
=======
* main - entry point
*
* statement based on last digit of number.
*
* return: 0
*
*/
>>>>>>> 87eb5dd1f1ee62f2f0f106596f608c536a54a808
int main(void)
{
int n;
int m;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;

if (m > 5)
	printf("Last digit of %i is %i and is greater than 5\n", n, m);
else if (m == 0)
	printf("Last digit of %i is %i and is 0\n", n, m);
else
	printf("Last digit of %i is %i and is less than 6 and not 0\n", n, m);
return (0);
}
