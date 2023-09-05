#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function returns a pointer to the duplicated string
 * @str: string to be returned
 * Return: 0
 */
char *_strdup(char *str)
{
	char *num;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	num = malloc(sizeof(char) * (i + 1));

	if (num == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		num[r] = str[r];

	return (num);
}
