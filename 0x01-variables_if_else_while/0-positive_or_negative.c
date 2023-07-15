#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  random number to the var n each time it is executed
 * Description: 'whether the number stored in the variable n is pos or neg'
 * Return: 0 (Sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
