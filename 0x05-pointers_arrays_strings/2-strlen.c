#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 *
 * @s: hold each character after the count
 * Return: length of a string.
 */
int _strlen(char *str)
{
	int len = 0;

	while(*str != '\0'){
		len++;
		str++;
	}
	
	return len;
}