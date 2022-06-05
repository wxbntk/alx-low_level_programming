#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: Write a program that prints all possible  three digits
 * The three digits must be different
 * Print only the smallest combination of three digits
 * 012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
 * Return: 0
 */

int main(void)
{
	int i;
	int j;
	int k = 0;

	while (k < 10)
	{
		j = 0;

		while (j < 10)
		{
			i = 0;

			while (i < 10)
			{
				if (i != j && j != k && k < j && j < i)

				{
					putchar('0' + k);
					putchar('0' + j);
					putchar('0' + i);

					if (i + j + k != 9 + 8 + 7)

					{
						putchar(',');
						putchar(' ');

					}

				}

				i++;
			}

			j++;
		}

		k++;
	}

	putchar('\n');
	return (0);

}
