#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry block
 * Description: reverse alphabet list
 * Return: always return to main
 */

int main(void)
{
	char r_letter = 'z';

	while (r_letter >= 'a')

	{
		putchar(r_letter);
		r_letter--;
	}

	putchar('\n');
	return (0);
}
