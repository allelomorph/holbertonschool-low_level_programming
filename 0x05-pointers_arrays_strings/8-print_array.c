#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers, plus by a new line
 *
 * @a: array to be accessed
 *
 * @n: amount of members of a[] to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;
/*
 * Tried to find size of int array this way, but later learned that
 * it only works for an array declared in the same c file. By the
 * time the array a is passed to this function, it is merely a pointer
 * to the first member of the array, and thus will always be 8 bytes.
 *
 *      size = sizeof(a) / sizeof(a[0]);
 *
 * Was going to use it to create a warning if the provided number is
 * greater than the amount of varaibles in the array. Would still
 * provide output of all members, as in task example output.
 *
 *	if (n > size)
 *	{
 *		printf("There are less members of this array ");
 *		printf("than the number requested.\n");
 *	}
 */
	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%i", a[i]);
		}
		else
		{
				 printf(", %i", a[i]);
		}
	}
	printf("\n");
}
