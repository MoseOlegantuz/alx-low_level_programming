#include <stdio.h>
/**
<<<<<<< HEAD
 * main - entry point
 *
 * Return: 0
 *
 */
=======
* main - entry point
*
* Return: 0
*
*/
>>>>>>> 87eb5dd1f1ee62f2f0f106596f608c536a54a808
int main(void)
{
char a;

<<<<<<< HEAD
for (a = 'a'; a <= 'z'; a++)
{
if (a == 'q' || a == 'e')
{
continue;
}
putchar(a);
=======
	for (a = 'a'; a <= 'z' ; a++)
	{
	if (a == 'q' || a == 'e')
		{
		continue;
		}
	putchar(a);
	}
	putchar('\n');
	return (0);
>>>>>>> 87eb5dd1f1ee62f2f0f106596f608c536a54a808
}
putchar('\n');
return (0);
}

