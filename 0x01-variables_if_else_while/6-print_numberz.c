#include <stdio.h>
/**
 * main - osgood
 * print all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int  main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(48 + i);
		i++;
	}

	putchar('\n');
	return (0);
}
