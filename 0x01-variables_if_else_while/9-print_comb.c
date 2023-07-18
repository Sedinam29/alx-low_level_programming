#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * separated by a comma and printed in ascending order
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
		}
	}
	putchar('\n');

	return (0);
}
