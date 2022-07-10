#include "main.h"

/**
 * _strlen - return the length of the string
 * @s: char type pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	int strLength;

	for (strLength = 0; s[strLength] != '\0'; strLength++)
		;

	return (strLength);
}
