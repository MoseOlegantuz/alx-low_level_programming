#include "main.h"

/**
 * _strlen - function to return the length of the string
 * @s: char type pointer
 * Return: length of string
 */
int _strlen(char *s)
{
	int y;

	for (y = 0; s[y] != '\0'; y++)
		;
	return (y);
}
