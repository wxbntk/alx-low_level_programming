#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry block
 * Description: list single digit decimal
 * Return: always return to main
 */

int main(void)
{

	int num;

	for (num = 0; num <= 9; num++)

	{

		putchar(48 + num);

	}


	putchar('\n');

	return (0);

}

