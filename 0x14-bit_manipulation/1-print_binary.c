#include "main.h"

/**
 * print_binary - prints binary equivalent of the decimal number.
 * @p: Number to print in binary.
 */
void print_binary(unsigned long int p)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = p >> i;
		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
