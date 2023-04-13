#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: arguments vector
 *owned by me osgoodtech26
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int a, t, w, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		s = av[a];
		t = 0;

		while (s[t++])
			len++;
		len++;
	}

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (a = 0, t = 0; a < ac && t < len; a++)
	{
		s = av[a];
		w = 0;

		while (s[w])
		{
			str[t] = s[w];
			w++;
			t++;
		}
		str[t++] = '\n';
	}
	str[w] = '\0';

	return (str);
}
