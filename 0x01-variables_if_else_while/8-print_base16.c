#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry block
 * Description: list hexa_decimal digit
 * Return: always return to main
 */

int main(void)
{

	char hex_num = '0';

	char hex_let;

	do{
		putchar(hex_num);
		hex_num++;
	}

	while (hex_num <= '9');

	for (hex_let = 'a'; hex_let <= 'f'; hex_let++)
	{
		putchar(hex_let);
	}
	putchar('\n');
	return (0);
}

