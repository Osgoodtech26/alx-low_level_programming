#include <stdio.h>
#include <stdlib.h>
/**
 * main - main osgood
 * prints all the numbers of base 16 in lowercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char c;
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
