#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argv: arguments of
 * @argc: arguments count of
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}

	return (0);
}

