#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that converts binary numbers to decimal
 * @b: holds the binary number to be covberted
 * Return: result
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			result = result * 2 + (*b - '0');
			b++;
		} else
		{
			return (0);
		}
	}
	return (result);
}
