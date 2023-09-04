#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, f, a, figure;

	i = 0;
	d = 0;
	n = 0;
	f = 0;
	a = 0;
	figure = 0;

	while (s[f] != '\0')
		f++;
	while (i < f && a == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			figure = s[i] - '0';
			if (d % 2)
				figure = -figure;
			n = n * 10 + figure;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			a = 0;
		}
		i++;
	}
	if (a == 0)
		return (0);
	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: argumentscount
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
