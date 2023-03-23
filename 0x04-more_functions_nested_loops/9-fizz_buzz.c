#include "main.h"
#include<stdio.h>

/**
 * main - program that prints the numbers from 1 to 100, followed by a new line
 * Return: 0 (success)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", x);
		}
		if (x != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
