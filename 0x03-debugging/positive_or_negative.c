#includ#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  random number to the var n each time it is executed
 * Description: 'whether the number stored in the variable n is pos or neg'
 * Return: 0 (Sucess)
 */
int main(void)
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
	return (0);
}
