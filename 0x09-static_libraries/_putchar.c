#include <unistd.h>
/**
 * _putchar - writes the character c tothe stdout
 * @c: character to be printed
 *
 * Return: 1 on success
 * on error, return -1, and errno is set appropriately.
 */
int _putchar(char c)
{
return	(write(1, &c,1));
}
