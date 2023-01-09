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
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: pointer to result of concatenation or NULL
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int length, i, j;
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length = _strlen(s1) + _strlen(s2);
	new_str = malloc((length + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		new_str[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		new_str[i + j] = s2[j];
	new_str[i + j] = '\0';
	return (new_str);
}
