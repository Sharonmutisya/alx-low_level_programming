#include "main.h"
/**
 * print_alphabet_*10 - Print lowercase alphabet 10 times
 */
void print_alphabet_*10(void)
{
	char num, letter;

	for (num = 0; num <= 9; num++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
