#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: string to write to file
 *
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1 || filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	len = _strlen(text_content);
	write(fd, text_content, len);
	close(fd);
	return (1);
}
