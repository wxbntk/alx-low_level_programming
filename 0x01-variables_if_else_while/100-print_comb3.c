#include <stdio.h>

/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0
 */

int main(void)
{

	int j;
	int i = 0;

	while (i <= 9)

	{

		j = 0;

		while (j <= 9)

			{

			if (j != i && j > i)
			{

			putchar('0' + i);
			putchar('0' + j);
			if (i + j != 17)
			{
				putchar(',');
				putchar(' ');
			}

			}
				j++;

			}
			i++;
	}

	putchar('\n');
	return (0);
}

