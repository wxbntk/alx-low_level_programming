#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry block
 * Description: lowercase without q and e
 * Return: 0
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')

		{

			putchar(ch);

		}

		ch++;

	}


	putchar('\n');

	return (0);


}

