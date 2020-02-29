#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 *
 * @dest: string to receive char variables
 *
 * @src: string source of char variables
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int length;
	char *st;
/*
 * adapting code form _strlen
 * will it eventually be defined in other file??
 * easier to just do:
 * int i = (_strlen(s) -1);
 */
	st = src;
	for (length = 0; *st; st++)
	{
		length++;
	}
/*	length -= 1; */
/*
 * end _strlen mimicry, use its value to limit next loop
 *
 * originally tried for(i = 0; *src, src++), but this advances the
 * memory address of src, so when it is referenced again by the
 * function, it is no longer in the same location.
 */

	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
