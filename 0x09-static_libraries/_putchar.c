#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The charactter to print
 *
 * Return: 1 on success, -1 if there is an error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
