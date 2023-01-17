#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @str: string
 * Return: string length
 */

unsigned int _strlen(char *str)
{
	unsigned int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}


/**
 * _strcpy - returns copy a string
 * @str: string
 * Return: copied string
 */

char *_strcpy(char *str)
{
	unsigned int len = _strlen(str), count;
	char *str_cpy = malloc(sizeof(char *) * (len + 1));

	if (str_cpy == NULL)
		return (NULL);
	for (count = 0; count < len; count++)
		str_cpy[count] = str[count];
	str_cpy[count] = '\0';
	return (str_cpy);
}

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpy_name, *cpy_owner;

	cpy_name = _strcpy(name);
	if (cpy_name == NULL)
		return (NULL);
	cpy_owner = _strcpy(owner);
	if (cpy_owner == NULL)
	{
		free(cpy_name);
		return (NULL);
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(cpy_name);
		free(cpy_owner);
		return (NULL);
	}
	new_dog->name = cpy_name;
	new_dog->age = age;
	new_dog->owner = cpy_owner;
	return (new_dog);
}
