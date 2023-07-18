#include "main.h"
/**
 * main -  prints the alphabet in lowercase
 * Description: follow by a new line
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
