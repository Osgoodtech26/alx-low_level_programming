#include "main.h"
/**
*  _memset - function fill the first @n bytes of the memory area pointed
*  pointed to by @s with the constant byte @b
*
*  @n:bytes of the memory pointed to @s
*
*  @s:with a constant bytes @b
*
*  @b: a memory pointer
*
*  Return: a pointer to the memory are @s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int w = 0;

	while (w < n)
	{
		s[w] = b;
		w++;
	}
	return (s);
}
