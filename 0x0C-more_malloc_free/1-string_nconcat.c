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
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: number of bytes
 * Return: Pointer to new string or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len, len1, len2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = _strlen(s1);
	len2 =  _strlen(s2);
	if (n >= len2)
	{
		len = len1 + len2 + 1;
	}
	else
	{
		len = len1 + n + 1;
	}
	str = malloc(len * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; n >= len2 ? j < len2 : j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = "\0";
	return (str);
}
