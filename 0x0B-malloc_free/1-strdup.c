#include "main.h"
#include <stdlib.h>
/**
* length - function that returns a pointer to a
* @src: copy
* Return: NULL if str = NULL
*/
int length(char *src)
{
	return ((*src == '\0') ? 1 : 1 + length(src + 1));
}
/**
* _strdup - function that returns a pointer to a
*           newly allocated space in memory, which
*           contains a copy of the string given a
*           sa parameter.
* @str: str to copy
* Return: NULL if str = NULL
*/
char *_strdup(char *str)
{
	char *new_str;
	unsigned int i, longitud;

	if (str == NULL)
		return (NULL);
	longitud = length(str);
	new_str = (char *)malloc(sizeof(char) * longitud);

	if (new_str == NULL || longitud == 0)
		return (NULL);
	for (i = 0; i <= longitud; i++)
		*(new_str + i) = *(str + i);

	return (new_str);
}

