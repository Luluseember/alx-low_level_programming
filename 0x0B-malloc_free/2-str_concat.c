#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, ii;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ii = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ii] != '\0')
		ii++;
	concat = malloc(sizeof(char) * (i + ii + 1));

	if (concat == NULL)
		return (NULL);
	i = ii = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	while (s2[ii] != '\0')
	{
		concat[i] = s2[ii];
		i++, ii++;
	}
	concat[i] = '\0';
	return (concat);
}
