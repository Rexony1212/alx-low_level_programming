#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}