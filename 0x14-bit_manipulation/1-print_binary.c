#include <stdio.h>
#include "main.h"

/**
 * print_binary_recursive - half of n and display remainder
 * @n: integer variabke to be converted to binary
 * Return: void
 **/

void print_binary_recursive(unsigned long int n)
{
if (n > 1)
print_binary_recursive(n / 2);

putchar('0' + (n % 2));
}

/**
 * print_binary - print 0 or goes to conversion function
 * @n: integer to be  converted
 * Return: nothing
 **/

void print_binary(unsigned long int n)
{
if (n == 0)
putchar('0');
else
print_binary_recursive(n);
}
