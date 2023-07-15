#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 * description:  use the putchar
 * only use putchar twice
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

