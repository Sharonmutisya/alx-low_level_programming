#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes character c to stdout
 * @c: the character to print
 * Return: on success 1
 * On error, -1 is returned and erroe set appropriatly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
