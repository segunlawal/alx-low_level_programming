#include "main.h"
/*
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of text file
 * @letters: the number of letters the function should read and print
 * Return: actual number of letters the function could read and print or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, num, num_read;
	char *buff;

	fd = open(filename, O_RDONLY);

	if (filename == NULL || fd == -1)
		return (0);
	buff = malloc(sizeof(char) * (letters + 1));
	if (buff == NULL)
		return (0);

	num_read = read(fd, buff, letters);
	num = write(STDOUT_FILENO, buff, num_read);
	free(buff);
	if (num != num_read)
		return (0);
	close(fd);

	return (num);
}
