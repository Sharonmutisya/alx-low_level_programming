#include "main.h"

/**
 * flip_bits - counts num of bit to change to get from one num to another.
 * @k: first num.
 * @l:second num.
 * Return: Num of bits to change.
 */
unsigned int flip_bits(unsigned long int k, unsigned long int l)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = k ^ l;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
