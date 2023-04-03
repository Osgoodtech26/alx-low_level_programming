#include "main.h"
/**
 * _memcpy - function copies @n bytes from memory area @src
 * to memory area @dest
 *
 * @n: function that copies
 *
 * @src: bytes from memory
 *
 * @dest: to memory area
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int w = 0;

	while (w < n)
	{
		dest[w] = src[w];
		w++;
	}

	return (dest);
}
