#include "main.h"
/**
 * _islower - checks for lowercase character
 * Description: use _putchar
 * @c: character to be checked
 * Return: (1)if c is lower otherwise (0)
 */
int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
