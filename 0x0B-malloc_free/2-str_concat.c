#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer to concatenate string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}

	concat = malloc(sizeof(char) * (i + j + 1));

	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		concat[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		concat[k] = s2[j];

	return (concat);
}
