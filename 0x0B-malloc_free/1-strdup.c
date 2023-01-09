#include <stdlib.h>
/**
 * _strlen - calculates length of a string
 * @str: string
 *
 * Return: length of string
 */

unsigned int _strlen(char *str)
{
	unsigned int a;

	for (a = 0; *str != '\0'; a++)
		str++;
	return (a);
}


/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to a newly allocated space in memory or NULL
 */

char *_strdup(char *str)
{
	char *str_dup;
	unsigned int a, length;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
	length = _strlen(str);
	str_dup = malloc((length + 1) * sizeof(char));
	if (str_dup == NULL)
		return (NULL);
	for (a = 0; a < length; a++)
		str_dup[a] = str[a];
	str_dup[a + 1] = '\0';
	return (str_dup);
	}
}
