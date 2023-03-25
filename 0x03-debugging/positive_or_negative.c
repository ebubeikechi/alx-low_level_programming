#include "main.h"

/**
 * positive_or_negative - checks if a number is positive or not
 *
 * @i: number to be checked
 *
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i < 1)
		printf("%d is negative \n", i);
	else
		printf("%d is positive \n", i);
}
