#include "main.h"

/**
 * _strlen - function returns the length of a string
 * @s: string
 * Return: integer legth of a string
 */

int _strlen(char *str)

{
	int length;
	length = 0;

	while (*str != '\0')
	{
		str++;
		length++;
	}

	return (length);
}
