#include <stdio.h>
/**
 * main - prints all the numbers of base sixteen in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int num;
	char la;

	for (num = 0; num < 10; num++)
		putchar ((num % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);
	putchar('\n');

	return (0);
}
