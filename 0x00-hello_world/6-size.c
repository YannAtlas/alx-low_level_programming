#include <stdio.h>
/**
 * main - a program that prints the size of various types on the computer
 * Return: 0 (Success)
*/
int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	return (0);
}

