#include "main.h"
/**
 * print_alphabet_x10 - prints x10 the alphabet, in lowercase
 * Description: using _putchar to print
 * Return: void
 */
void print_alphabet_x10(void)
{
	char v;
	int i = 0;

	while (i < 10)
	{

	for (v = 'a'; v <= 'z'; v++)
	{
		_putchar(v);
	}
		_putchar('\n');
		i++;
	}
}

