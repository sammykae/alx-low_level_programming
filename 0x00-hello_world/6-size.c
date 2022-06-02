#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char aChar;
	int anInt;
	long aLong;
	long long aLongLongInt;
	float aFloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(aChar));
	printf("Size of an int: %lu byte(s)\n", sizeof(anInt));
	printf("Size of a long int: %lu byte(s)\n", sizeof(aLong));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(aLongLongInt));
	printf("Size of a float: %lu byte(s)\n", sizeof(aFloat));
	return (0);
}
