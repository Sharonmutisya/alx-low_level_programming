#include "main.h"

/**
 * get_endianness - Checks if machine is big or little endian
 * Return: 0 (Big), 1 (Little).
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *a = (char *) &j;

	return (*a);
}
